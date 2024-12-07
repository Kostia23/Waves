#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) // Construction
    : QMainWindow(parent)
{
    setFixedSize(800,600);

    DrawArea = new DrawingWidget(this); // Creating drawing area
    DrawArea->setGeometry(50,50,700,400); // Set the position and size

    amplitudeLabel = new QLabel("Amplitude: 50",this); // Creating the label
    amplitudeLabel->setGeometry(50,470,150,20);// Set the position and size

    frequencyLabel = new QLabel("Frequency: 1",this);
    frequencyLabel->setGeometry(400,470,150,20);

    amplitudeSlider = new QSlider(Qt::Horizontal,this); // Creating the slider for changing amplitude
    amplitudeSlider->setRange(10,100);// Set the min and max value
    amplitudeSlider->setValue(50);// Default value
    amplitudeSlider->setGeometry(50,500,300,20);// Set the position and size
    connect(amplitudeSlider,&QSlider::valueChanged,this,&MainWindow::updateamplitude); // Connecting slider action with custom function

    frequencySlider = new QSlider(Qt::Horizontal,this);
    frequencySlider->setRange(1,10);
    frequencySlider->setValue(1);
    frequencySlider->setGeometry(400,500,300,20);
    connect(frequencySlider,&QSlider::valueChanged,this,&MainWindow::updatefrequency);
}

void MainWindow::updatefrequency(int value){ // Implemention of changing value by slider
    DrawArea->setFrequency(value); // Calling method from DrawingWidget to set the value
    frequencyLabel->setText("Frequency: " + QString::number(value));// Set the value in the label
}

void MainWindow::updateamplitude(int value){ // Implemention of changing value by slider
    DrawArea->setAmplitude(value);// Calling method from DrawingWidget to set the value
    amplitudeLabel->setText("Amplitude: " + QString::number(value));// Set the value in the label
}

MainWindow::~MainWindow(){} // Destruction

