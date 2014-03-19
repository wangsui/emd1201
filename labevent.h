#ifndef LABEVENT_H
#define LABEVENT_H

#include <QLabel>
#include <QMouseEvent>

class labevent : public QLabel
{
    Q_OBJECT
private:
    int press;
public :
    explicit labevent(QWidget *parent = 0);
protected:
    virtual void mousePressEvent(QMouseEvent *event);
signals:
    void singleClicked();
    void doubleClicked();
public slots:
    void clicked();
};

#endif // LABEVENT_H
