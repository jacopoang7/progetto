#ifndef PROGETTO_DATETIME_H
#define PROGETTO_DATETIME_H

#include "Time.h"
#include "Date.h"

class DateTime: public Date, public Time {
public:
    DateTime():Date(),Time(){}
    DateTime(int d,int m,int y,int h, int min):Day(d),Month(m),Year(y),hours(h),minutes(min){}
    virtual ~DateTime(){}
    void PrintDateTime() const;
    
};


#endif //PROGETTO_DATETIME_H
