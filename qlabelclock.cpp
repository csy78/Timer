#include "qlabelclock.h"
#include <QDateTime>
#include <QTimer>
#include <QMouseEvent>

QLabelClock::QLabelClock(QWidget *parent):QLabel(parent)
{
    this->setText(this->now());
    //创建定时器
    timer = new QTimer(parent);
    //定时器timeout信号与时间撒互信函数进行绑定/关联
    //信号与槽机制实现
    timer->start(1);
    connect(timer, &QTimer::timeout, this, &QLabelClock::refresh);
}

QString QLabelClock::now()
{
    return (QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss zzz"));
}

void QLabelClock::refresh()
{
    if (1 == refreshEnable)
        //刷新文本内容
    this->setText(this->now());
}

void QLabelClock::refreshToggle()
{
    if (1 == refreshEnable)
        //刷新文本内容
        refreshEnable = 0;
    else
        refreshEnable = 1;
}

//鼠标按下时间处理函数
void QLabelClock::mousePressEvent(QMouseEvent *ev)
{
    if(ev->buttons() == Qt::LeftButton)
    {
        if (this->refreshEnable)
            this->refreshEnable = 0;
        else
            this->refreshEnable = 1;
    }
}
