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
    this->hours=hours;
}
void Time::SetMinutes(int minutes) {
    this->minutes=minutes;
}
void Time::GetCurrentTime() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    hours=1 + ltm->tm_hour;
    minutes=1 + ltm->tm_min;
}
void Time::PrintTime() const {
    std::cout<<"Time="<<hours<<":"<<minutes<<std::endl;
}
