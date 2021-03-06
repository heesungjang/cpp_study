#include <iostream>

namespace work1
{
    int a = 1;
    void doSomething()
    {
        a += 3;
    }
}

namespace work2
{
    int a = 1;
    void doSomething()
    {
        a += 5;    
    }
}


int main()
{
    using namespace std;

    work1::a;
    work1::doSomething();

    work2::a;
    work2::doSomething();

    int apple = 5;
    cout << apple << endl;

    {
        int apple2 = 1;
        cout << apple2 << endl;
    }

    cout << apple << endl;

    return 0;
}

