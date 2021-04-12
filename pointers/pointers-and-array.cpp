#include <iostream>

using namespace std;

int main()
{
    // declare array of 8 elements
    int num[8];
    num[0] = 11;
    num[1] = 12;
    num[2] = 13;
    num[3] = 14;
    num[4] = 15;
    
    
    // print the addresses using pointers of all the elements
    // also print the addresses using & operator
    
    for(int indx=0; indx<5; indx++)
    {
        cout<<"Address of element "<<indx<<" using pointer  : "<<num + indx<<endl;
        cout<<"Address of element "<<indx<<" using &operator: "<< &num[indx]<<endl;
    }
    
    for(int indx=0; indx<5; indx++)
    {
        cout<<"Value of element "<<indx<<" using pointer  : "<<*(num + indx)<<endl;
        cout<<"Value of element "<<indx<<"                : "<< num[indx]<<endl;
    }
    
    cout<<"Value: "<<*(num + 0) * 100;

    return 0;
}