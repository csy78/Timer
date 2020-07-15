#ifndef QLABELCLOCK_H
#define QLABELCLOCK_H

#include <QObject>
#include <QLabel>

class QLabelClock : public QLabel
{
    Q_OBJECT
private:
    QString now();
public:
    QTimer * timer;
    int refreshEnable = 1;

    QLabelClock(QWidget *parent);

    void refresh();
    void refreshToggle();
protected:
    void mousePressEvent(QMouseEvent *ev) override;
};

#endif // QLABELCLOCK_H
