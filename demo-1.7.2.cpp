#include <iostream>

using namespace std;

int main()
{
    cout << "static_cast<int>(7.9)" << endl;
    cout << static_cast<int>(7.9) << endl;

    cout << "static_cast<double>(5 + 3)" << endl;
    cout << static_cast<double>(5 + 3) << endl;

    // double(15) / 2 --> double 7.5
    cout << "static_cast<double>(15) / 2" << endl;
    cout << static_cast<double>(15) / 2 << endl;

    // 15 is int and 2 is int, int 15/2 = 7, and double(7) --> 7.0
    cout << "static_cast<double>(15 / 2)" << endl;
    cout << static_cast<double>(15 / 2) << endl;

    cout << "static_cast<int>(7.8 + static_cast<double>(15) / 2))" << endl;

    cout << static_cast<int>(7.8 + static_cast<double>(15) / 2) << endl;

    cout << "static_cast<int>(7.8 + static_cast<double>(15 / 2))" << endl;

    cout << static_cast<int>(7.8 + static_cast<double>(15 / 2)) << endl;


    return 0;
}