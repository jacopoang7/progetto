#ifndef COUNTDOWN_H
#define COUNTDOWN_H

#include <QWidget>
class QSpinBox;
class QLCDNumber;
class QPushButton;
class QTimer;

class Countdown : public QWidget
{
  Q_OBJECT
public:
explicit Countdown(QWidget *base = nullptr);
int Scount, Mcount, Hcount;
QSpinBox *casella1;
QSpinBox *casella2;
QSpinBox *casella3;
QTimer *updatetimer;
QLCDNumber *lCDNumber1;
QLCDNumber *lCDNumber2;
QLCDNumber *lCDNumber3;



private slots:
void click_bottone1();
void click_bottone2();
void update();

private:
 QPushButton *bottone1;
 QPushButton *bottone2;

};

#endif // COUNTDOWN_H
