#include<iostream>
using namespace std;

int main(){
    int marks[4];
    cout<<"enter the values : "<<endl;
    for (int i = 0; i < 4; i++)
    {
        cin>>marks[i];
    }
    cout<<endl<<"the values entered are : "<<endl<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<marks[i]<<endl;
    }
    return 0;
}