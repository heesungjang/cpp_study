#include <iostream>

int main()
{
    using namespace std;

    // conditional operator
    bool onSale = true;

    
    const int price = (onSale == true) ? 10 : 100;

    // if(onSale)
    //     price = 10;
    // else
    //     price = 100;

    cout << price << endl;
    
    return 0;
}