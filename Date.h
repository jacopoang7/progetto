#ifndef PROGETTO_DATE_H
#define PROGETTO_DATE_H

#include<string>

class Date {
private:
    int Day;
    int Month;
    int Year;
public:
    Date(){
        Day=Month=Year=1;
    }
    Date(int D,int M,int Y):Day(D),Month(M),Year(Y){}
    ~Date(){}
    void SetNewDate();
    void GetActualDate();
    void PrintDate();
    int GetDay();
    int GetMonth();
    int GetYear();
    void SetDay(int Day);
    void SetMonth(int Month);
    void SetYear(int Year);
    void ConvertMonth(string M);
};


#endif //PROGETTO_DATE_H
