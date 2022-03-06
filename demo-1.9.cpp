#include <iostream>

using namespace std;

int main()
{
    /*
    this expects:
    x to be 5 
    y to be 5
    */
     int x = 5;
     cout << "x: " << x << endl;
     int y = x++;
     cout << "y: " << y << endl;

     cout << "x: " << x << endl;


     int b = 5;
     cout << "b: " << b << endl;
     int c = ++b;
     cout << "c: " << c <<  endl;

     cout << 29 / 4  << endl;

     
    return 0;
}