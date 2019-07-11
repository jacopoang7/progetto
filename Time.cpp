
#include "Time.h"
#include <ctime>
#include <iostream>

void Time::SetNewTime(int hours,int minutes){
    this->hours=hours;
    this->minutes=minutes;
}
int Time::GetHours() {
    return hours;
}
int Time::GetMinutes() {
    return minutes;
}
void Time::SetHours(int hours) {
    if(hours<25 && hours>0)
    this->hours=hours;
}
void Time::SetMinutes(int minutes){
    if(minutes>-1 && minutes<61)
    this->minutes=minutes;
}
void Time::GetCurrentTime() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    hours=1 + ltm->tm_hour;
    minutes=1 + ltm->tm_min;
}
void Time::PrintTime() const {
    if(hours>0 && hours<25 && minutes>-1 && minutes<60)
    std::cout<<"Time="<<hours<<":"<<minutes<<std::endl;
}
void Time:PrintTimeEnglish() const{
    if(hours>0 && hours<25 && minutes>-1 && minutes<60) {
        if (hours <= 12) {
            std::cout << "Time=" << hours << ":" << minutes << "am" << std::endl;
        } else {
            std::cout << "Time=" << hours << ":" << minutes << "pm" << std::endl;
        }
    }
};
