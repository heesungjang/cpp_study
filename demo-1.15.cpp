#include <iostream>
#include <cmath>

using namespace std;

int main (){
    char ch1, ch2;
	int a, b;
	
	cout << "Enter 2 char: ";
	cin.get(ch1);
	cout << ch1 << endl;
	
	cin.get(ch2);	
    cout << ch2 << endl;
	
	cin.putback(ch2);
	cin >> ch1;
	cout << ch1 << endl;
			
    return 0;
}