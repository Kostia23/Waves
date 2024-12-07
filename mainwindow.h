#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QSlider>
#include <QLabel>
#include "DrawingWidget.h"

class MainWindow : public QMainWindow // Class of MainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr); // Construction
    ~MainWindow(); // Destruction
private slots:
    void updatefrequency(int value); // Changing frequency when slider using
    void updateamplitude(int value); // Changing amplitude when slider using
private:
    DrawingWidget* DrawArea;

    QSlider* amplitudeSlider;
    QSlider* frequencySlider;
    QLabel* amplitudeLabel;
    QLabel* frequencyLabel;

};
#endif // MAINWINDOW_H
