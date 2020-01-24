#include <iostream>
#include <string>


class ln80c_buffer : public std::streambuf {
private:
    std::streambuf* buf;
    int num_str;
    int length;
    char line[81];
    bool new_str;
    bool out;
public:

    ln80c_buffer(std::streambuf* old_buf) :  num_str(0), length(0), buf(old_buf), new_str(true) {}

protected:


    int_type overflow(int_type ch) override {
        if (new_str) {
            out = false;
            int_type num[9];
            int len = 0;
            int b = num_str;
            if (b!=0) {
                while (b!=0){
                    len++;
                    b /= 10;
                }
            }else{
                len = 1;
            }
            num[8] = ' ';
            b = num_str;
            for(int i = 7; i >= 0; i--){
                if (len != 0){
                    num[i] ='0' + b%10;
                    len--;
                    b /= 10;
                }else{
                    num[i] = ' ';
                }
            }

            for(int i = 0; i < 9; i++){
//                buf->sputc(num[i]);
                    line[i] = num[i];
            }


            length = 9;
            num_str++;
            new_str = false;
        }


        if (static_cast<char>(ch) == '\n') {
            new_str = true;
            line[length] = static_cast<char>(ch);
            out = true;
        }else if (length == 80) {
            new_str = true;
            line[length] = static_cast<char>(ch);
            length++;
            line[length] = static_cast<char>('\n');
            out = true;
        } else{
            line[length] = static_cast<char>(ch);
        }
//            line[length] = static_cast<char>(c);

        length++;
        if (out){
            for(int i = 0; i < length; i++){
                buf->sputc(static_cast<int_type>(line[i]));
            }
        }
        return ch;
    }
};