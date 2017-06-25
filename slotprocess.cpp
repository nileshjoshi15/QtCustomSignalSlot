#include "slotprocess.h"
#include<QHBoxLayout>
#include<QSpinBox>
#include<QLCDNumber>
#include<QDebug>

SlotProcess::SlotProcess(QWidget *parent)
    :QWidget(parent)
{
    QHBoxLayout *layout =new QHBoxLayout;
    QSpinBox *mySlide = new QSpinBox;
    mySlide->setRange(0,10);

    connect(mySlide,SIGNAL(valueChanged(int)),this,SLOT(setChangedValue(int)));

    layout->addWidget(mySlide);
    setLayout(layout);
}


void SlotProcess::setChangedValue(int a){
    emit myValueChanged(a);
    qDebug()<<"I received new  value : "<<a;
}

SlotProcess::~SlotProcess(){
}
