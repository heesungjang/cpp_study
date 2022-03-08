#include <iostream>

using namespace std;

int secret(const int x);

int main()
{
    int x = 6;
    int value = secret(x);

    cout << value << endl;
}


int secret(const int x){
    if (x>5) {
        return x*2;
    } 

    return x;
}