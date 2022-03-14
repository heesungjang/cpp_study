#include <iostream>

using namespace std;

// forward declaration
extern void doSomething();
extern int a;


int main()
{

    doSomething();

    cout << a << endl;
    
    return 0;
}