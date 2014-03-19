#include "labevent.h"
#include <QTimer>

labevent::labevent(QWidget *parent):
    QLabel(parent)
{
    press = 0;
}

void labevent::mousePressEvent(QMouseEvent *event){
    if(event->button() == Qt::LeftButton){
    press++;
    if(1 == press)
        QTimer::singleShot(300, this,SLOT(clicked()));
    }
    QLabel::mousePressEvent(event);
}

void labevent::clicked()
{
    if(1 == press)
        emit singleClicked();
    else
        emit doubleClicked();
     press = 0;

}
