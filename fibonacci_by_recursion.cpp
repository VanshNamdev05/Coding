#include<iostream>
using namespace std;

int fib(int a){
    if(a<2){
        return 1;
    }
    return fib(a-2) + fib(a-1);
}

int main(){
    //Fibonacci series : 
    //1,1,2,3,5,8,13....
    //last 2 add ho kr next number dega...
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The term in fibonacci series is : "<<fib(n);

    return 0;
}