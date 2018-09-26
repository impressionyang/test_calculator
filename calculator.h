#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED

#include <string>
#include <iostream>
#include <stack>
using namespace std;


class Calculator{
public:
    Calculator();
    void get_result();  //结果存到result里面
    void test();
private:
    string test2;
    stack<char> *OPTR; //寄存运算符
    stack<double> *OPND; //寄存操作数和结果
    double result;
    bool Precede(char,char);    //判断优先级
    double Operate(double, double, char);   //计算二元表达式结果
    bool isSymble(char );   //判断c是否是运算符

};



#endif // CALCULATOR_H_INCLUDED
