#include "DrawingWidget.h"

DrawingWidget::DrawingWidget(QWidget *parent):QWidget(parent),amplitude(50),frequency(1){ // Construction
    setFixedSize(700,400);

}

void DrawingWidget::paintEvent(QPaintEvent* event){ // Drawing function
    QWidget::paintEvent(event);

    QPainter paint(this); // Set area of draw
    paint.setRenderHint(QPainter::Antialiasing);

    QLinearGradient gradient(0,0,width(),height()); // Background color
    gradient.setColorAt(0.0,Qt::white);
    gradient.setColorAt(1.0,QColorConstants::Svg::lightblue);
    paint.fillRect(rect(),gradient);

    int centerY = height()/2;
    QPoint previousPoint(0,centerY);

    paint.setPen(QPen(Qt::gray,1,Qt::DashLine)); // Gray horizontal line
    paint.drawLine(0,centerY,width(),centerY);

    QPen pen(Qt::black,2);
    paint.setPen(pen);

    for(int x = 0;x < width();x++){ // Loop that provides drawing sinusoid
        int y = centerY - amplitude*sin(frequency*x*M_PI/180.0);
        QPoint currentPoint(x,y);
        paint.drawLine(previousPoint,currentPoint);
        previousPoint = currentPoint;
    }
}

void DrawingWidget::setAmplitude(int value){ // Set the value and call drawing function
    amplitude = value; // Changing the value
    update(); // Calling the drawing function
}

void DrawingWidget::setFrequency(int value){ // Set the value and call drawing function
    frequency = value;
    update();
}

DrawingWidget::~DrawingWidget(){}// Destruction
