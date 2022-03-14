#include <iostream>

using namespace std;

int main()
{
    float a = 4.5;    
    cout << static_cast<int>(a) << endl;
    cout << static_cast<int>(3.2) << endl;
    cout << static_cast<double> (21) << endl;

    double b = 15;

    cout << static_cast<double>(15) / 2 << endl;
    return 0;
}