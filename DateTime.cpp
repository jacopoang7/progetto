#include "DateTime.h"
#include "Time.h"
#include "Date.h"

void DateTime::PrintDateTime() {
    cout<<"Date:"<<GetDay()<<"/"<<GetMonth()<<"/"<<GetYear()<<endl;
    cout<<"Time="<<GetHours()<<":"<<GetMinutes()<<endl;
}
