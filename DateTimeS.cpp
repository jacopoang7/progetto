#include<iostream>
#include "DateTimeS.h"
void DateTimeS::PrintDateTimeS() const {
    std::cout<<"Date:"<<GetDay()<<"/"<<GetMonth()<<"/"<<GetYear()<<std::endl;
    std::cout<<"Time="<<GetHours()<<":"<<GetMinutes()<<":"<<GetSeconds()<<std::endl;
}
