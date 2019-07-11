#ifndef PROGETTO_TIMES_H
#define PROGETTO_TIMES_H
#include "Time.h"

class TimeS: public Time {
private:
    int hours;
    int minutes;
    int seconds;
public:
    TimeS():Time(){
        seconds=0;
    }
    TimeS(int h, int m, int s):Time(h,m), seconds(s){}
    virtual ~TimeS(){}
    void SetNewTime(int hours,int minutes,int seconds) override;
    int GetSeconds();
    void SetSeconds(int seconds);
    void GetCurrentTime() override;
    void PrintTime() const override;

};


#endif //PROGETTO_TIMES_H
