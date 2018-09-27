#include <iostream>
#include "calculator.h"
#include <string>

using namespace std;

int main()
{
    Calculator c1;
    //c1.test();

    string *d=c1.format("11*(23*(34-12))/46=#");
    int i=0;
    while(d[i]!="#"){
        cout<<d[i]<<endl;
        i++;
    }


    return 0;
}
