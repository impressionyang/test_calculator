#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED

#include <string>
#include <iostream>
#include <stack>
using namespace std;


class Calculator{
public:
    Calculator();
    void test();
private:
    string test2;
    stack OPTR; //寄存运算符
    stack OPND; //寄存操作数和结果

};



#endif // CALCULATOR_H_INCLUDED
