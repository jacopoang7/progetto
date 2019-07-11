#include "DateTime.h"
#include "Time.h"
#include "Date.h"

void DateTime::PrintDateTime() const {
    cout<<"Date:"<<GetDay()<<"/"<<GetMonth()<<"/"<<GetYear()<<endl;
    cout<<"Time="<<GetHours()<<":"<<GetMinutes()<<endl;
}
