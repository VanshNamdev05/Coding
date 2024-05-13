#include<iostream>
using namespace std;

void swap(int*a,int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}


int main(){
    
    int a=4, b=5;
    cout<<"The value of a and b before swapping is : "<<a<<" and "<<b<<endl;
    swap(&a,&b);
    cout<<"The value of a and b after swapping is : "<<a<<" and "<<b;

    return 0;
}