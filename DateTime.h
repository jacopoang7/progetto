
#ifndef PROGETTO_DATETIME_H
#define PROGETTO_DATETIME_H

#include "Time.h"
#include "Date.h"
#include<ctime>
class DateTime: public Date, public Time {
public:
    DateTime():Date(),Time(){}
    DateTime(int d,int m,int y,int h, int min):Day(d),Month(m),Year(y),hours(h),minutes(min){}
    ~DateTime(){}
    void PrintDateTime();
};


#endif //PROGETTO_DATETIME_H
