#include "calculator.h"

Calculator::Calculator(){
    OPND=new stack<double>();
    OPTR=new stack<char>();
    result=0;
}


void Calculator::get_result(){
    OPTR->push('#');
    string input;
    cin>>input;
    char c='1';//default
    //sscanf(input,"%c",c);
    while(c!='#'||OPTR->top()!='#'){
        if(!isSymble(c)){
            double temp;
            //sscanf(c,"%lf",temp);
            OPND->push(temp);

            cin>>input;
            //sscanf(input,"%c",c);
        }
    }

}

bool Calculator::isSymble(char get){
    if(get=='+'||get=='-'||get=='*'||get=='/'){
        return true;
    }

    return false;
}

string * Calculator::format(string get){
    string *afterformat=new string[get.length()];
    string temp;
    int j=0;
    for(int i=0;i<(int)get.length();i++){
        if(get[i]=='+'||get[i]=='-'||get[i]=='*'||get[i]=='/'||get[i]=='('||get[i]==')'||get[i]=='#'||get[i]=='='){
            if(!temp.empty()){
                afterformat[j]=temp;
                //cout<<"temp:"<<temp<<endl;
                temp.erase();
                j++;

            }

            afterformat[j]=get[i];
            j++;
        }else{
            temp.append(1,get[i]);
        }

    }
    return afterformat;
}


bool Calculator::Precede(char first,char second){
    switch(first){
    case '+':
        switch(second){
        case '+':
            return '>';
            break;
        case '-':
            return '>';
            break;
        case '*':
            return '<';
            break;
        case '/':
            return '<';
            break;
        case '(':
            return '<';
            break;
        case ')':
            return '>';
            break;
        case '#':
            return '>';
            break;
        }
        break;


    case '-':
        switch(second){
        case '+':
            return '>';
            break;
        case '-':
            return '>';
            break;
        case '*':
            return '<';
            break;
        case '/':
            return '<';
            break;
        case '(':
            return '<';
            break;
        case ')':
            return '>';
            break;
        case '#':
            return '>';
            break;
        }

        break;
    case '*':
        switch(second){
        case '+':
            return '>';
            break;
        case '-':
            return '>';
            break;
        case '*':
            return '>';
            break;
        case '/':
            return '>';
            break;
        case '(':
            return '<';
            break;
        case ')':
            return '>';
            break;
        case '#':
            return '>';
            break;
        }

        break;
    case '/':
        switch(second){
        case '+':
            return '>';
            break;
        case '-':
            return '>';
            break;
        case '*':
            return '>';
            break;
        case '/':
            return '>';
            break;
        case '(':
            return '<';
            break;
        case ')':
            return '>';
            break;
        case '#':
            return '>';
            break;
        }

        break;
    case '(':
        switch(second){
        case '+':
            return '<';
            break;
        case '-':
            return '<';
            break;
        case '*':
            return '<';
            break;
        case '/':
            return '<';
            break;
        case '(':
            return '<';
            break;
        case ')':
            return '=';
            break;
        case '#':
            //return '>';
            break;
        }

        break;
    case ')':
        switch(second){
        case '+':
            return '>';
            break;
        case '-':
            return '>';
            break;
        case '*':
            return '>';
            break;
        case '/':
            return '>';
            break;
        case '(':
            //return '>';
            break;
        case ')':
            return '>';
            break;
        case '#':
            return '>';
            break;
        }

        break;
    case '#':
        switch(second){
        case '+':
            return '<';
            break;
        case '-':
            return '<';
            break;
        case '*':
            return '<';
            break;
        case '/':
            return '<';
            break;
        case '(':
            return '<';
            break;
        case ')':
            //return '=';
            break;
        case '#':
            return '=';
            break;
        }

        break;
    }
    return false;
}


double Calculator::Operate(double a,double b,char operation){
    switch(operation){
    case '+':
        return a+b;
        break;
    case '-':
        return a-b;
        break;
    case '*':
        return a*b;
        break;
    case '/':
        return a/b;
        break;
    }
    return 0;
}

void Calculator::test(){

    for(int i=0;i<100;i++){
        OPND->push(i);
    }

    for(int i=0;i<100;i++){
        cout<<OPND->top()<<endl;
        OPND->pop();
    }

    cout<<test2<<endl;
}
