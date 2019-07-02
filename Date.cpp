#include "Date.h"
void Date::SetNewDate(char * mese, int anno) {
    srand(time(NULL));
    if (anno % 4 == 0) {
        if (mese == "Febbraio") {
            Day = rand() % 28 + 1;
            Month = 2;
            Year = anno;
        }
    } else {


        if (mese == "Novembre" || mese == "Aprile" || mese == "Giugno" || mese == "Settembre") {

        } else {

        }
        Day = rand() %
    }
