#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    m_gl=new NGLScene();
    ui->gridLayout->addWidget (m_gl,0,0,2,1);

    this->setWindowTitle("SimpleQOpenGLWidgetANDGuiForm");

    //manual signal-slot connection
    connect(ui->pushButton, SIGNAL(clicked(bool)),  m_gl, SLOT(testButtonClicked()) );
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

//    QImage image=m_gl->grabFramebuffer();
//    image.save("image.png");
}

void MainWindow::on_doubleSpinBox_3_valueChanged(double arg1)
{
    m_gl->printsmth();
}

void MainWindow::on_doubleSpinBox_2_editingFinished()
{

}
