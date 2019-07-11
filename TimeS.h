
#include<ctime>
#include<iostream>
#include "TimeS.h"
void TimeS::SetNewTime(int hours,int minutes,int seconds) {
    this->hours=hours;
    this->minutes=minutes;
    this->seconds=seconds;
}}
int TimeS::GetSeconds() {
    return seconds;
}

void TimeS::SetSeconds(int seconds) {
    this->seconds=seconds;
}
void TimeS::GetCurrentTime() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    hours=1 + ltm->tm_hour;
    minutes=1 + ltm->tm_min;
    seconds=1 + 1tm->tm_sec;
}
void TimeS::PrintTime() const{
    if(hours>0 && hours<25 && minutes>-1 && minutes<60 && seconds>-1 && seconds<61 )
    std::cout<<"Time="<<hours<<":"<<minutes<<":"<<seconds<<std::endl;
}
void TimeS::PrintTimeEnglish() const {
    if(hours>0 && hours<25 && minutes>-1 && minutes<60 && seconds>-1 && seconds<61 ){
        if (hours <= 12) {
            std::cout << "Time=" << hours << ":" << minutes <<":"<<seconds<< "am" << std::endl;
        } else {
            std::cout << "Time=" << hours << ":" << minutes <<":"<<seconds<< "pm" << std::endl;
        }
    }
}
