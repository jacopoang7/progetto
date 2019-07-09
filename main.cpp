#include <QApplication>
#include "Countdown.h"

int main(int argc, char **argv)
{
QApplication app (argc, argv);

Countdown timer;
timer.show();

return app.exec();
}

