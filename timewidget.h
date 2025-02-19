#ifndef TIMEWIDGET_H
#define TIMEWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QTimer>
#include <QDateTime>
#include <QVBoxLayout>

class TimeWidget : public QWidget {
    Q_OBJECT

public:
    explicit TimeWidget(QWidget *parent = nullptr);

private slots:
    void updateTime();

private:
    QLabel *timeLabel;
    QTimer *timer;
};

#endif // TIMEWIDGET_H

