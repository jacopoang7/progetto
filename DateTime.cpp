#include<iostream>
#include "DateTime.h"
#include "Time.h"
#include "Date.h"

void DateTime::PrintDateTime() const {
    std::cout<<"Date:"<<GetDay()<<"/"<<GetMonth()<<"/"<<GetYear()<<std::endl;
    std::cout<<"Time="<<GetHours()<<":"<<GetMinutes()<<std::endl;
}
