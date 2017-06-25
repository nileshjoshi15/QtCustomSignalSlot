#ifndef CUSTOMLCDNUMBER_H
#define CUSTOMLCDNUMBER_H
#include<QWidget>
#include<QLCDNumber>

class CustomLCDNumber: public QWidget
{
    Q_OBJECT
public:
    CustomLCDNumber(QWidget *parent = 0);

private slots:
    void displayChangedVal(int a);

private:
    QLCDNumber *lcdNumber;
};

#endif // CUSTOMLCDNUMBER_H
