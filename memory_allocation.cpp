#include<iostream>
using namespace std;

class shop{
    private : 

    int itemid[100];
    int itemprice[100];
    

    public : 

    int counter;

    void initcounter(void)
    {
        counter=1;
    }
    void displayprice(void);
    void setprice(void);
    
};

void shop :: setprice(void){
    cout<<"enter id of your item no"<<counter<<endl;
    cin>>itemid[counter];
    cout<<"enter price of your item"<<endl;
    cin>>itemprice[counter];
    counter++;
}

void shop :: displayprice(void){
    for (int i = 1; i < counter; i++)
    {
        cout<<"The price of item with id "<<itemid[i]<<"is"<<itemprice[i]<<endl;
    }
    
}
int main(){
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    


    return 0;
}