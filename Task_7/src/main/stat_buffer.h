#include <iostream>
#include <string>
#include <cctype>

class stat_buffer: public std::streambuf {
private:
    std::streambuf* buf;
    int num_str;
    int num_words;
    int num_char;
    bool checkisalpha;

public:
    explicit stat_buffer(std::streambuf* old_buf) : buf(old_buf), num_str(0), num_words(0), num_char(0), checkisalpha(false) {}

    int getnumstr(){
        return num_str;
    }

    int getnumwords(){
        return num_words;
    }

    int getnumchars(){
        return num_char;
    }

protected:
    int_type underflow() override {

        int_type ch = buf->sbumpc();

        if (ch != traits_type::eof()) {

            if (std::isalpha(ch)) {
                if (!checkisalpha) {
                    num_words++;
                    checkisalpha = true;
                }
            } else {
                checkisalpha = false;
            }
            if (ch == '\n')
                num_str++;

            num_char++;

            char chr = traits_type::to_char_type(ch);
            setg(&chr, &chr, &chr+1);
        }

        return ch;
    }
};