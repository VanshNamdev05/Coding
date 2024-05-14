#include<iostream>
using namespace std;

int volume(int a){
    int volume;
    volume = (a*a*a);
    return volume;
}

int volume(int a, int b){
    int volume;
    volume = (3.14 * a * a * b);
    return volume;
}

int main(){
    
    cout<<"The volume of cube with side 4 is : "<<volume(4)<<endl; //jis bhi function ki jarurat hogi whi use hoga
    cout<<"The volume of cylinder with radius 4 and height 5 is : "<<volume(4,5)<<endl;


    return 0;
}