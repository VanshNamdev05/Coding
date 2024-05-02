#include<iostream>
using namespace std;

int main(){

    cout<<"**********Using break : ************"<<endl;

    for (int i = 1; i <= 995; i++)
    {
        if (i==3)
        {
            break;//i 3 hote hi break ho jayega loop
        }
        
        cout<<i<<endl;

    }

    cout<<"**********Using continue : ************"<<endl;

    for (int i = 1; i <= 9; i++)
    {
        if (i==3)
        {
            continue;//i 3 hote hi 3 chod kr baaki print ho jayenge
        }
        
        cout<<i<<endl;

    }
    
    return 0;
}