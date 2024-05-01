#include<iostream>
using namespace std;

int main (){
    
    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;
    
    if((age<18)&&(age>0)){
        cout<<"You can not get a driving license";

    }

    else if(age>=18){
        cout<<"You can get a driving license";
    }

    else{
        cout<<"Paida to ho ja dhang se :)";
    }

    return 0;

}