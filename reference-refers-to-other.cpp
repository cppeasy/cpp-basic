#include <iostream>

using namespace std;

int main()
{
    int money = 1000;      // this is referent
    int &refMoney = money;  // this is reference
    cout<<refMoney<<endl;   // output 1000
    
    refMoney = 2000;   // change the value of refence, 
                       // the value of referent also change
    
    cout<<refMoney<<endl;   // output 2000
    
    int dollar = 500;
    
    refMoney = dollar;  // Reference refer to another object, 
                        // this change the value of money, refMoney
    
    cout<<money<<" "<<refMoney<<" "<<dollar<<endl; 
    //output 500 500 500

    dollar = 45;

    cout<<money<<" "<<refMoney<<" "<<dollar<<endl; 
    //output 500 500 45

    return 0;
}
