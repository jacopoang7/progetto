#ifndef PROGETTO_DATE_H
#define PROGETTO_DATE_H

#include<string>


class Date{
private:
    int Day;
    int Month;
    int Year;
public:
    Date(){
        Day=Month=Year=1;
    }
    Date(int D,int M,int Y):Day(D),Month(M),Year(Y){}
    virtual ~Date(){}
    void SetNewDate();
    virtual void GetActualDate();
    void PrintDate() const;
    int GetDay();
    int GetMonth();
    int GetYear();
    void SetDay(int Day);
    void SetMonth(int Month);
    void SetYear(int Year);
    void ConvertMonth(std::string M);
};


#endif //PROGETTO_DATE_H
