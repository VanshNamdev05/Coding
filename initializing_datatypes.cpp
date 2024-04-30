#include<iostream>
using namespace std;
int glo = 5;//global variable..

void sum(){

    cout<< "\nthis is glo : "<<glo;//5 aayega
}

int main(){
    int glo = 55;//local variable (precedence jaada hogi global variable se )
    int a = 4;
    float b = 4.44;
    double c = 4.4444444444;
    char d= 'd';
    cout << "this is the value of a : "<<a;
    cout<<"\nthis the value of glo : "<<glo;//55 aana chahiye
    // \n se new line aayegi
    sum();
    bool e = true;
    cout<<"\n"<<e;//output 1 aayega kyuki e true hai 



    return 0;
}