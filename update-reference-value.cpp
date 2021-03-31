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

    return 0;
}
