#include<iostream>
using namespace std;

int main(){
    int a = 12;
    int b = a;
    int c = float(a);
    float d = 12.9090;
    int e = int (d);

    cout<<"the value of a is : "<<a<<endl;
    cout<<"the value of b is : "<<b<<endl;
    cout<<"the value of c is : "<<c<<endl;
    cout<<"the value of d is : "<<d<<endl;
    cout<<"the value of e is : "<<e<<endl;

    cout<<"the size of 12 is : "<<sizeof(a)<<endl;
    cout<<"the size of b is : "<<sizeof(b)<<endl;
    cout<<"the size of c is : "<<sizeof(c)<<endl;
    cout<<"the size of d is : "<<sizeof(d)<<endl;
    cout<<"the size of e is : "<<sizeof(e)<<endl;
    cout<<"the size of 34.4 is : "<<sizeof(34.4)<<endl;//by default 34.4 ko double hi maanega;
    cout<<"the size of 34.4L is : "<<sizeof(34.4L)<<endl;
    cout<<"the size of 34.4l is : "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4F is : "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4f is : "<<sizeof(34.4f)<<endl;

    //*****************REFERENCE VARIABLES************************

    int x = 22;
    int y = x;

    cout << x<<endl;
    cout << y<<endl;

    return 0;
}