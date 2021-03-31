#include <iostream

using namespace std;

int main()
{
    int &refMoney = NULL;  // Compiler ERROR, 
                           // Reference must be initialize

    int dollar = 100;
    int &refDollar = dollar; // OK, Compile.
    
    return 0;
}
