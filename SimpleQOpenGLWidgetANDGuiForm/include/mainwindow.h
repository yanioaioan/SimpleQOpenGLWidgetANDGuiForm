#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <nglscene.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_doubleSpinBox_3_valueChanged(double arg1);

    void on_doubleSpinBox_2_editingFinished();

private:
    Ui::MainWindow *ui;
    /// @brief our openGL widget
    NGLScene *m_gl;

//    QWidget *centralWidget; = new QWidget(this);
//    setCentralWidget(centralWidget);
};

#endif // MAINWINDOW_H
