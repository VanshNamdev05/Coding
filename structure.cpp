#include<iostream>
using namespace std;

typedef struct employee
    {
        int id;
        float salary;
        char favchar;
    }ok;

int main(){
    ok vansh;
    struct employee wakawaka;

    vansh.id = 61;
    vansh.salary = 5000000;
    vansh.favchar = 'r';

    cout<<"THE ID IS : "<<vansh.id<<endl;

    cout<<"THE SALARY IS : "<<vansh.salary<<endl;

    cout<<"THE FAVCHAR IS : "<<vansh.favchar<<endl;

    return 0;
}