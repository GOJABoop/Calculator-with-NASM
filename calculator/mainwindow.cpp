#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "functions.h"
#include <cmath>

#define NIL 0
#define ONE 1
#define NEGATIVE_ONE -1
#define POINT '.'

enum BASIC_OPERATIONS {ADDITION=1,SUBTRACTION,MULTIPLICATION,DIVISION,MODULE};

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

void MainWindow::setResultAtDisplay(){
    display = QString::number(result);
    ui->textBrowserResult->setText(display);
}

void MainWindow::checkOutputConversion(){
    if(ui->radioButtonDegree->isChecked()){
        result = toDegree(result);
    }
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
    operand_A = display.toDouble();
    operation = ADDITION;
    clearDisplay();
}

void MainWindow::on_pushButtonSubtraction_clicked(){
    operand_A = display.toDouble();
    operation = SUBTRACTION;
    clearDisplay();
}

void MainWindow::on_pushButtonMultiplication_clicked(){
    operand_A = display.toDouble();
    operation = MULTIPLICATION;
    clearDisplay();
}

void MainWindow::on_pushButtonDivision_clicked(){
    operand_A = display.toDouble();
    operation = DIVISION;
    clearDisplay();
}

void MainWindow::on_pushButtonModule_clicked(){
    operand_A = display.toDouble();
    operation = MODULE;
    clearDisplay();
}

void MainWindow::on_pushButtonGetResult_clicked(){
    operand_B = display.toDouble();
    clearDisplay();
    switch(operation){
        case ADDITION:          add();              break;
        case SUBTRACTION:       sub();              break;
        case MULTIPLICATION:    mul();              break;
        case DIVISION:          div();              break;
        case MODULE:            module();           break;
        default: break;
    }
}

///CALL TO ASSEMBLY FUNCTIONS
void MainWindow::add(){
    result = addition(operand_A,operand_B); //function assembler call
    setResultAtDisplay();
}

void MainWindow::sub(){
    result = substraction(operand_A,operand_B); //function assembler call
    setResultAtDisplay();
}

void MainWindow::mul(){
    result = multiplication(operand_A,operand_B); //function assembler call
    setResultAtDisplay();
}

void MainWindow::div(){
    result = division(operand_A,operand_B); //function assembler call
    setResultAtDisplay();
}

void MainWindow::module(){
    result = (int)operand_A % (int)operand_B;
    setResultAtDisplay();
}

void MainWindow::on_pushButtonExp_clicked(){
    operand_A = display.toDouble();
    clearDisplay();
    result = squarePow(operand_A); //function assembler call
    setResultAtDisplay();
}

void MainWindow::on_pushButtonSqrt_clicked(){
    operand_A = display.toDouble();
    clearDisplay();
    if(operand_A > NIL){
        result = squareRoot(operand_A); //function assembler call
        setResultAtDisplay();
    }else{
        ui->textBrowserResult->setText("Undefined");
    }
}

void MainWindow::on_pushButtonLog_clicked(){
    operand_A = display.toDouble();
    clearDisplay();
    if(operand_A > NIL){
        result = logarithm(operand_A); //function assembler call
        checkOutputConversion();
        setResultAtDisplay();
    }else{
        ui->textBrowserResult->setText("Undefined");
    }
}

void MainWindow::on_pushButtonCos_clicked(){
    operand_A = display.toDouble();
    clearDisplay();
    result = cosine(operand_A); //function assembler call
    checkOutputConversion();
    setResultAtDisplay();
}

void MainWindow::on_pushButtonSen_clicked(){
    operand_A = display.toDouble();
    clearDisplay();
    result = sine(operand_A); //function assembler call
    checkOutputConversion();
    setResultAtDisplay();
}

void MainWindow::on_pushButtonTan_clicked(){
    operand_A = display.toDouble();
    clearDisplay();
    result = tangent(operand_A); //function assembler call
    checkOutputConversion();
    setResultAtDisplay();
}


void MainWindow::on_pushButtonAntiLog_clicked(){
    operand_A = display.toDouble();
    clearDisplay();
    result = antilogarithm(operand_A); //function assembler call
    checkOutputConversion();
    setResultAtDisplay();
}

void MainWindow::on_pushButtonArcCos_clicked(){
    operand_A = display.toDouble();
    clearDisplay();
    if(operand_A >= NEGATIVE_ONE && operand_A <= ONE){
        result = arccos(operand_A); //function assembler call
        checkOutputConversion();
        setResultAtDisplay();
    }else{
        ui->textBrowserResult->setText("Undefined");
    }
}

void MainWindow::on_pushButtonArcSen_clicked(){
    operand_A = display.toDouble();
    clearDisplay();
    if(operand_A >= NEGATIVE_ONE && operand_A <= ONE){
        result = arcsin(operand_A); //function assembler call
        checkOutputConversion();
        setResultAtDisplay();
    }else{
        ui->textBrowserResult->setText("Undefined");
    }
}

void MainWindow::on_pushButtonArctan_clicked(){
    operand_A = display.toDouble();
    clearDisplay();
    result = arcsin(operand_A); //function assembler call
    checkOutputConversion();
    setResultAtDisplay();
}

void MainWindow::on_pushButtonChangeSign_clicked(){
    double aux;
    aux = display.toDouble();
    aux = changeSign(aux);
    display = QString::number(aux);
    ui->textBrowserResult->setText(display);
}
