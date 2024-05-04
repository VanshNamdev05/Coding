#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *b = &a;
    cout<<"the address of a is : "<<&a<<endl;
    cout<<"the address of a is : "<<b<<endl;
    cout<<"the value at address b is : "<<*b<<endl;
    // pointer to pointer : 
    int **c=&b;
    cout<<"the address of b is : "<<&b<<endl;
    cout<<"the address of b is : "<<c<<endl;
    cout<<"the value at address c is : "<<**c<<endl;


    return 0;
}