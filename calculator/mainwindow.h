#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void clearDisplayIfZero();

    void  clearDisplay();

    void setResultAtDisplay();

    void checkOutputConversion();

    void on_pushButtonPointDecimal_clicked();

    void on_pushButtonNumber1_clicked();

    void on_pushButtonNumber0_clicked();

    void on_pushButtonNumber2_clicked();

    void on_pushButtonNumber3_clicked();

    void on_pushButtonNumber4_clicked();

    void on_pushButtonNumber5_clicked();

    void on_pushButtonNumber6_clicked();

    void on_pushButtonNumber7_clicked();

    void on_pushButtonNumber8_clicked();

    void on_pushButtonNumber9_clicked();

    void on_pushButtonDelete_clicked();

    void on_pushButtonClearBuffer_clicked();

    void on_pushButtonAddition_clicked();

    void on_pushButtonSubtraction_clicked();

    void on_pushButtonMultiplication_clicked();

    void on_pushButtonDivision_clicked();

    void on_pushButtonModule_clicked();

    void on_pushButtonGetResult_clicked();

    void add();

    void sub();

    void mul();

    void div();

    void module();

    void on_pushButtonExp_clicked();

    void on_pushButtonSqrt_clicked();

    void on_pushButtonLog_clicked();

    void on_pushButtonCos_clicked();

    void on_pushButtonSen_clicked();

    void on_pushButtonTan_clicked();

    void on_pushButtonAntiLog_clicked();

    void on_pushButtonArcCos_clicked();

    void on_pushButtonArcSen_clicked();

    void on_pushButtonArctan_clicked();

    void on_pushButtonChangeSign_clicked();

private:
    Ui::MainWindow *ui;
    QString display;
    int operation;
    double operand_A;
    double operand_B;
    double result;
};
#endif // MAINWINDOW_H
