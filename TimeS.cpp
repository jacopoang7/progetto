#include<ctime>
#include<iostream>
#include "TimeS.h"
void TimeS::SetNewTime(int hours,int minutes,int seconds){
    this->hours=hours;
    this->minutes=minutes;
    this->seconds=seconds;
}
int TimeS::GetHours() {
    return hours;
}
int TimeS::GetMinutes() {
    return minutes;
}
int TimeS::GetSeconds() {
    return seconds;
}
void TimeS::SetHours(int hours) {
    this->hours=hours;
}
void TimeS::SetMinutes(int minutes) {
    this->minutes=minutes;
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
    std::cout<<"Time="<<hours<<":"<<minutes<<":"<<seconds<<std::endl;
}
