#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>

#define NIL 0
#define POINT '.'

enum BASIC_OPERATIONS {ADDITION,SUBTRACTION,MULTIPLICATION,DIVISION,MODULE,POW};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::clearDisplayIfZero(){
    if(display == '0'){
        display.clear();
    }
}

void MainWindow::clearDisplay(){
    display.clear();
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonPointDecimal_clicked(){
    display.append(POINT);
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonNumber0_clicked(){
    if(display != '0'){
        display.append('0');
        ui->textBrowserResult->setText(display);
    }
}

void MainWindow::on_pushButtonNumber1_clicked(){
    clearDisplayIfZero();
    display.append('1');
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonNumber2_clicked(){
    clearDisplayIfZero();
    display.append('2');
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonNumber3_clicked(){
    clearDisplayIfZero();
    display.append('3');
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonNumber4_clicked(){
    clearDisplayIfZero();
    display.append('4');
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonNumber5_clicked(){
    clearDisplayIfZero();
    display.append('5');
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonNumber6_clicked(){
    clearDisplayIfZero();
    display.append('6');
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonNumber7_clicked(){
    clearDisplayIfZero();
    display.append('7');
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonNumber8_clicked(){
    clearDisplayIfZero();
    display.append('8');
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonNumber9_clicked(){
    clearDisplayIfZero();
    display.append('9');
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonDelete_clicked(){
    display.remove(display.length()-1,1);
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonClearBuffer_clicked(){
    display.clear();
    operation = NIL;
    operand_A = NIL;
    operand_B = NIL;
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonAddition_clicked(){
    operand_A = display.toFloat();
    operation = ADDITION;
    clearDisplay();
}

void MainWindow::on_pushButtonSubtraction_clicked(){
    operand_A = display.toFloat();
    operation = SUBTRACTION;
    clearDisplay();
}

void MainWindow::on_pushButtonMultiplication_clicked(){
    operand_A = display.toFloat();
    operation = MULTIPLICATION;
    clearDisplay();
}

void MainWindow::on_pushButtonDivision_clicked(){
    operand_A = display.toFloat();
    operation = DIVISION;
    clearDisplay();
}

void MainWindow::on_pushButtonModule_clicked(){
    operand_A = display.toFloat();
    operation = MODULE;
    clearDisplay();
}

void MainWindow::on_pushButtonExp_clicked(){
    operand_A = display.toFloat();
    operation = POW;
    clearDisplay();
}

void MainWindow::on_pushButtonGetResult_clicked(){
    operand_B = display.toFloat();
    clearDisplay();
    switch(operation){
        case ADDITION:          addition();         break;
        case SUBTRACTION:       subtraction();      break;
        case MULTIPLICATION:    multiplication();   break;
        case DIVISION:          division();         break;
        case MODULE:            module();           break;
        case POW:               power();            break;
        default: break;
    }
}

///CALL TO ASSEMBLY FUNCTIONS
void MainWindow::addition(){
    result = operand_A + operand_B; //function assembler call
    display = QString::number(result);
    ui->textBrowserResult->setText(display);
}

void MainWindow::subtraction(){
    result = operand_A - operand_B; //function assembler call
    display = QString::number(result);
    ui->textBrowserResult->setText(display);
}

void MainWindow::multiplication(){
    result = operand_A * operand_B; //function assembler call
    display = QString::number(result);
    ui->textBrowserResult->setText(display);
}

void MainWindow::division(){
    result = operand_A / operand_B; //function assembler call
    display = QString::number(result);
    ui->textBrowserResult->setText(display);
}

void MainWindow::module(){
    result = (int)operand_A % (int)operand_B; //function assembler call
    display = QString::number(result);
    ui->textBrowserResult->setText(display);
}

void MainWindow::power(){
    result = pow(operand_A,operand_B); //function assembler call
    display = QString::number(result);
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonLn_clicked(){
    operand_A = display.toFloat();
    clearDisplay();
    if(operand_A > NIL){
        result = log(operand_A); //function assembler call
        display = QString::number(result);
        ui->textBrowserResult->setText(display);
    }else{
        ui->textBrowserResult->setText("Undefined");
    }
}

void MainWindow::on_pushButtonSqrt_clicked(){
    operand_A = display.toFloat();
    clearDisplay();
    if(operand_A > NIL){
        result = sqrt(operand_A); //function assembler call
        display = QString::number(result);
        ui->textBrowserResult->setText(display);
    }else{
        ui->textBrowserResult->setText("Undefined");
    }
}

void MainWindow::on_pushButtonLog_clicked(){
    operand_A = display.toFloat();
    clearDisplay();
    if(operand_A > NIL){
        result = log10(operand_A); //function assembler call
        display = QString::number(result);
        ui->textBrowserResult->setText(display);
    }else{
        ui->textBrowserResult->setText("Undefined");
    }
}

void MainWindow::on_pushButtonCos_clicked(){
    operand_A = display.toFloat();
    clearDisplay();
    result = cos(operand_A); //function assembler call
    display = QString::number(result);
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonSen_clicked(){
    operand_A = display.toFloat();
    clearDisplay();
    result = sin(operand_A); //function assembler call
    display = QString::number(result);
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonTan_clicked(){
    operand_A = display.toFloat();
    clearDisplay();
    result = tan(operand_A); //function assembler call
    display = QString::number(result);
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonCotan_clicked(){
    operand_A = display.toFloat();
    clearDisplay();
    if(operand_A != NIL){
        result = 1/tan(operand_A); //function assembler call
        display = QString::number(result);
        ui->textBrowserResult->setText(display);
    }else{
        ui->textBrowserResult->setText("Undefined");
    }
}

void MainWindow::on_pushButtonCosh_clicked(){
    operand_A = display.toFloat();
    clearDisplay();
    result = cosh(operand_A); //function assembler call
    display = QString::number(result);
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonSenh_clicked(){
    operand_A = display.toFloat();
    clearDisplay();
    result = sinh(operand_A); //function assembler call
    display = QString::number(result);
    ui->textBrowserResult->setText(display);
}

void MainWindow::on_pushButtonTanh_clicked(){
    operand_A = display.toFloat();
    clearDisplay();
    result = tanh(operand_A); //function assembler call
    display = QString::number(result);
    ui->textBrowserResult->setText(display);
}
