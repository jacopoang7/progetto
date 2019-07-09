#include <QSpinBox>
#include <QPushButton>
#include <QLCDNumber>
#include <QSpinBox>
#include "Countdown.h"
#include <QTimer>
 Countdown::Countdown(QWidget *base) :
 QWidget(base)
 {
setWindowTitle("Timer");
setFixedSize(500,500);

lCDNumber1 = new QLCDNumber(this);
lCDNumber1->setGeometry(100, 100, 80, 30);
lCDNumber1-> setFixedSize(60,60);

lCDNumber2 = new QLCDNumber(this);
lCDNumber2->setGeometry(200, 100, 80, 30);
lCDNumber2-> setFixedSize(60,60);


lCDNumber3 = new QLCDNumber(this);
lCDNumber3->setGeometry(300, 100, 80, 30);
lCDNumber3-> setFixedSize(60,60);


casella1 = new QSpinBox(this);
casella1->setGeometry(100, 200, 80, 30);
casella1->setRange(0, 24);

casella2 = new QSpinBox(this);
casella2->setGeometry(200, 200, 80, 30);
casella2->setRange(0, 60);

casella3 = new QSpinBox(this);
casella3->setGeometry(300, 200, 80, 30);
casella3->setRange(0, 60);

bottone1 = new QPushButton("Start", this);
bottone1->setGeometry(300, 300, 80, 30);

bottone2 = new QPushButton("Load", this);
bottone2->setGeometry(100, 300, 80, 30);

updatetimer = new QTimer(this);

connect(bottone1, SIGNAL(clicked()), this, SLOT(click_bottone1()));
 connect(bottone2, SIGNAL(clicked()), this, SLOT(click_bottone2()));
 connect(updatetimer, SIGNAL(timeout()), this, SLOT(update()));
}
void Countdown::click_bottone1()
{
updatetimer->start(1000);
}

void Countdown::click_bottone2()
{
    Hcount = casella1->value();
    Mcount = casella2->value();
    Scount = casella3->value();
lCDNumber1->display(Hcount);
lCDNumber2->display(Mcount);
lCDNumber3->display(Scount);

}

void Countdown::update()
{
Scount--;
if(Scount<0) {
Scount = 59;
Mcount--;
}
if(Mcount<0) {
Mcount = 59;
Hcount--;
}
if(Hcount<0)
 Hcount = 24;

lCDNumber1->display(Hcount);
lCDNumber2->display(Mcount);
lCDNumber3->display(Scount);
}
