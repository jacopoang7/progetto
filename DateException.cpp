#include "DateException.h"

DateException::DateException(const std::string& err_msg, int err_code)
::std::invalid_argument(err_msg)
{
if(err_code < 0 || err_code > 2)
    this->err_code = UNDEFINED;
else this->err_code = err_code;

}

/*! brief Getter per il codice di errore
    return codice di errore

*/
int DateException::code(){
    return this->err_code;
}

