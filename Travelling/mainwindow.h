#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_createTab_clicked();

    void on_buildGraphs_clicked();

    void on_calculation_clicked();

    void on_createTab_pressed();

    void on_buildGraphs_pressed();

    void on_calculation_pressed();

    void TabHide();

    void TabShow();

    void Search(int l, int i);
private:
    Ui::MainWindow *ui;
protected:
    void paintEvent(QPaintEvent*) override;
};
#endif // MAINWINDOW_H
