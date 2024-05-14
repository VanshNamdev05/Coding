#include<iostream>
using namespace std;
int factorial(int a){
    if (a<=1)
    {
        return 1;
    }
    
    return a* factorial(a-1);//function apne aapko bula rha hai... fir se int factorial(int a) execute hoga
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n);
    return 0;
}