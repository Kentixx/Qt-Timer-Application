#include "timewidget.h"

TimeWidget::TimeWidget(QWidget *parent)
    : QWidget{parent}
{
    QVBoxLayout* layout = new QVBoxLayout(this);

    timeLabel = new QLabel(this);
    timeLabel->setAlignment(Qt::AlignCenter);
    timeLabel->setStyleSheet("font-size: 65px; font-weight: bold; color: white; font-family: Bahnschrift;");
    layout->addWidget(timeLabel);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &TimeWidget::updateTime);
    timer->start(1000);

    updateTime();
}

void TimeWidget::updateTime() {
    QDateTime current = QDateTime::currentDateTime();
    timeLabel->setText(current.toString("dd.MM.yyyy HH:mm:ss"));
}
