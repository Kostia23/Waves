#ifndef DRAWINGWIDGET_H
#define DRAWINGWIDGET_H

#include <QPainter>
#include <QWidget>

class DrawingWidget : public QWidget{ // Widget for drawing sinusoid
    Q_OBJECT
public:
    explicit DrawingWidget(QWidget *parent = nullptr); // Construction
    ~DrawingWidget(); // Destruction
    void setAmplitude(int value); // Set the value of amplitude
    void setFrequency(int value); // Set the value of frequency
protected:
    void paintEvent(QPaintEvent* event) override; // Function that provides drawing the sinusoid
private:
    double amplitude;
    double frequency;
};
#endif // DRAWINGWIDGET_H
