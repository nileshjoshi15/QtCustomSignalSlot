#include "customlcdnumber.h"
#include<QHBoxLayout>

CustomLCDNumber::CustomLCDNumber(QWidget *parent)
     :QWidget(parent)
{
     QHBoxLayout *layout =new QHBoxLayout;
     lcdNumber= new QLCDNumber;
     layout->addWidget(lcdNumber);
     setLayout(layout);
}

void CustomLCDNumber::displayChangedVal(int a){
    lcdNumber->display(a);
}
