
#include "Date.h"
#include<chrono>
#include<iostream>
#include<ctime>
void Date::SetNewDate() {
    srand(time(NULL));
    Month=rand()%12+1;
    Year=rand()%2019+1;
    if (Month == 2) {
        if (Year % 4 == 0) {
            Day = rand() % 29 + 1;
        } else {
            Day = rand() % 28 + 1;
        }
    }
    if(Month==11 || Month==4 || Month==6 || Month==9){
        Day=rand()%30+1;
    }
    else{
        Day=rand()%31+1;
    }
}
void Date::GetActualDate() {

    time_t now = time(0);
    tm *ltm = localtime(&now);
    Year=1970 + ltm->tm_year;
    Month=1 + ltm->tm_mon;
    Day=ltm->tm_mday;
}

void Date::PrintDate() const{
   std::cout<<Day<<"/"<<Month<<"/"<<Year<<std::endl;
}
int  Date::GetDay() {
    return Day;
}
int Date::GetMonth() {
    return Month;
}
int Date::GetYear() {
    return Year;
}
void set_day(int Day) {
    if ((Day <= 0) || (Day >= 32)) {
        std::cerr << "Day e' limitato fra 1 e 31, te hai inserito: " << Day << std::endl;
        return;
    }
    this->Day = Day;
}
void set_month(int Month) {
    if ((Month <= 0) || (Month >= 13)) {
        std::cerr << "Month e' limitato fra 1 e 12, te hai inserito:  " << Month << std::endl;
        return;
    }
    this->Month = Month;
}
void Date::SetYear(int Year) {
    if ((Year <= 0) || (Year >= 2020)) {
        std::cerr << "Year e' limitato fra 1 e 2019, te hai inserito: " << Year << std::endl;
        return;
    }
    this->Year = Year;
}
void Date::ConvertMonth(std::string M) {
    switch(M){
        case(M=="Gennaio") set_month(1);
            break;
        case(M=="Febbraio")set_month(2);
            break;
        case(M=="Marzo") set_month(3);
            break;
        case(M=="Aprile")set_month(4);
            break;
        case(M=="Maggio") set_month(5);
            break;
        case(M=="Giugno")set_month(6);
            break;
        case(M=="Luglio") set_month(7);
            break;
        case(M=="Agosto")set_month(8);
            break;
        case(M=="Settembre") set_month(9);
            break;
        case(M=="Ottobre")set_month(10);
            break;
        case(M=="Novermbre") set_month(11);
            break;
        case(M=="Dicembre")set_month(12);
            break;
    }
}
void Date::PrintDateAsian() const {
    std::cout<<Year<<"/"<<Month<<"/"<<Day<<std::endl;
}
void Date::PrintDateUsa() const {
    std::cout<<Month<<"/"<<Day<<"/"<<Year<<std::endl;
}
