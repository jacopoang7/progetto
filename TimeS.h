
#ifndef PROGETTO_TIMES_H
#define PROGETTO_TIMES_H


class TimeS {
private:
    int hours;
    int minutes;
    int seconds;
public:
    TimeS(){
        hours=0;
        minutes=0;
        seconds=0;
    }
    TimeS(int h, int m, int s):hours(h),minutes(m), seconds(s){}
    virtual ~TimeS(){}
    void SetNewTime(int hours,int minutes);
    int GetHours();
    int GetMinutes();
    int GetSeconds();
    void SetHours(int hours);
    void SetMinutes(int minutes);
    void SetSeconds(int seconds);
    virtual void GetCurrentTime();
    void PrintTime() const;

};


#endif //PROGETTO_TIMES_H
