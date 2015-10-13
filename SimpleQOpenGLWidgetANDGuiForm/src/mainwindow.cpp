#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    setWindowTitle ("Collision Detection and Response");
    ui->setupUi(this);
    m_gl=new NGLScene();
    ui->gridLayout->addWidget (m_gl,0,0,2,1);

    //manual signal-slot connection
    connect(ui->pushButton, SIGNAL(clicked(bool)),  m_gl, SLOT(testButtonClicked(bool)) );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //auto signal-slot connection
    std::cout<<"Button Clicked - auto signal-slot connection"<<std::endl;
    m_gl->update();
}
