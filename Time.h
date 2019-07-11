
#ifndef PROGETTO_TIME_H
#define PROGETTO_TIME_H


class Time {
private:
    int hours;
    int minutes;
public:
    Time(){
        hours=0;
        minutes=0;
    }
    Time(int h, int m):hours(h),minutes(m){}
    virtual ~Time(){}
    void SetNewTime(int hours,int minutes);
    int GetHours();
    int GetMinutes();
    void SetHours(int hours);
    void SetMinutes(int minutes);
    void GetCurrentTime();
    void PrintTime();

};


#endif //PROGETTO_TIME_H
