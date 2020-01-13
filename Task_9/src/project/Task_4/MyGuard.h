//
// Created by roman on 15.11.2019.
//

#include <iosfwd>
#include "iostream"

class MyGuard{
public:
    MyGuard(std::ostream& ost):
    Flow(ost),
    Flags(ost.flags()),
    Fill(ost.fill()),
    Ex(ost.exceptions()){}

    ~MyGuard(){
        Flow.flags(Flags);
        Flow.fill(Fill);
        Flow.exceptions(Ex);

    }
private:
    std::ostream& Flow;
    std::ostream::fmtflags Flags;
    char Fill;
    std::ios_base::iostate  Ex;
};
