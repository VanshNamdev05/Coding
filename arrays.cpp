#include<iostream>
using namespace std;

int main(){
    int marks[4]= {30,33,40,99} ;
    int submarks[4];
    submarks[0]=93;
    submarks[1]=73;
    submarks[2]=63;
    submarks[3]=53;
    cout<<"SUB MARKS ARE : "<<endl;
    cout<<submarks[0]<<endl;
    cout<<submarks[1]<<endl;
    cout<<submarks[2]<<endl;
    cout<<submarks[3]<<endl<<endl;
    cout<<"you can change the value of an array "<<endl;
    submarks[3]=444;
    cout<<submarks[3]<<endl;
    cout<<"MARKS ARE : "<<endl;

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    return 0;
}