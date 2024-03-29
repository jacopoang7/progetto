#ifndef PROGETTO_DATEEXCEPTION_H
#define PROGETTO_DATEEXCEPTION_H


#include <stdexcept>
#include <string>



class DateException : public std::invalid_argument
{

private:
int err_code;


public:


enum codes
        {

       UNDEFINED,

       STRING_INVALID_FORMAT,

       INVALID_FORMAT

};



DateException(const std::string& err_msg, int err_code = 0);

int code();

};





#endif //PROGETTO_DATEEXCEPTION_H
