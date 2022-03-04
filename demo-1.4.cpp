#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const *argv[]){
	// cout << endl <<"Limits tests for Signed int" << endl;
	// int intValMax = numeric_limits<int>::max();
	// cout << "Max int =" << intValMax     << endl;
	// cout << "Overflow " << intValMax + 1 << endl;
	
	// int intValMin = numeric_limits<int>::min();
	// cout << "Min int =" << intValMin     << endl;
	// cout << "Overflow " << intValMin - 1 << endl;

    // cout << endl << "Limits tests for Unsigned int" << endl;
	// unsigned int uIntValMax = numeric_limits<unsigned int>::max();
	// cout << "Max int =" << uIntValMax     << endl;
	// cout << "Overflow " << uIntValMax + 1 << endl;
	
	// unsigned int uIntValMin = numeric_limits<unsigned int>::min();
	// cout << "Min int =" << uIntValMin     << endl;
	// cout << "Overflow " << uIntValMin - 1 << endl;
    int a =2147483647;

    cout << a << endl;

    a += 1;
    
    cout << a << endl;

    unsigned int b = 2147483647;

    cout << b << endl;

    b += 1;
    
    int c  = - 2147483648;

    c -= 1;
	
    cout << c << endl;

    return 0;
}
