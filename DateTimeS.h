
#ifndef PROGETTO_DATETIMES_H
#define PROGETTO_DATETIMES_H

#include"Date.h"
#include "TimeS.h"

class DateTimeS :public Date, public TimeS{
public:
    DateTimeS():Date(),TimeS(){}
    DateTimeS(int d,int m,int y,int h, int min,int sec):Day(d),Month(m),Year(y),hours(h),minutes(min),seconds(sec){}
    virtual ~DateTimeS(){}
    void PrintDateTimeS() const;

};



#endif //PROGETTO_DATETIMES_H
