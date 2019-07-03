

#ifndef PROGETTO_DATE_H
#define PROGETTO_DATE_H


class Date {
private:
    int Day;
    int Month;
    int Year;
public:
    Date(int D,int M,int Y):Day(D),Month(M),Year(Y){

    }
    ~Date(){}
    void SetNewDate();
};


#endif //PROGETTO_DATE_H
