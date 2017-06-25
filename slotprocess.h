#ifndef SLOTPROCESS_H
#define SLOTPROCESS_H
#include<QApplication>
#include <QWidget>

class SlotProcess: public QWidget
{
    Q_OBJECT
public:
    SlotProcess(QWidget *parent = 0);
    ~SlotProcess();

signals:
    void myValueChanged(int myNewValue);


public slots:
    void setChangedValue(int a);

};

#endif // SLOTPROCESS_H
