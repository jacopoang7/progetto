#include "Date.h"
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
    if(Month==11 || Month=4 || Month=6 || Month=9){
        Day=rand()%30+1;
    }
    else{
        Day=rand()%31+1;
    }
}
