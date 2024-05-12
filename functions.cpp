#include<iostream>
using namespace std;
int sum(int a , int b){
    int c = a+b;
    //a and b will be taking values from the actual parameters....
    //a and b are formal parameters....
    return c;
    }
int main(){
    int num1 , num2 ;
    cout<<"Enter the value of number 1 : "<<endl;
    cin>>num1;
    cout<<"Enter the value of number 2 : "<<endl;
    cin>>num2;
    cout<<"The sum is : "<<sum(num1,num2);
    // num1 num2 are actual parameters....
    
    return 0;
}