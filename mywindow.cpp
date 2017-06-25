#include "mywindow.h"
#include<QSpinBox>
#include<QHBoxLayout>
#include<QLCDNumber>
#include "slotprocess.h"
#include "customlcdnumber.h"

MyWindow::MyWindow()
{
    QWidget *widget = new QWidget;


    QHBoxLayout *layout =new QHBoxLayout;
    /*Widget with QSpinbox inside*/
    SlotProcess *sprocss=new SlotProcess;

    /*Widget with LCDNumber inside*/
    CustomLCDNumber *lcdNumber = new CustomLCDNumber;

    layout->addWidget(sprocss);
    layout->addWidget(lcdNumber);

    /*custom Signal myValuChanged inside SlotProcess Widget*/
    /*custom Slot displayChangedVal inside CustomLCDNumber Widget*/
    connect(sprocss,SIGNAL(myValueChanged(int)),lcdNumber,SLOT(displayChangedVal(int)));

    widget->setLayout(layout);
    setCentralWidget(widget);
}
