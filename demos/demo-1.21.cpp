#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double score1 = 11.11;
	double score2 = 22.2222;
	double score3 = 0.3333333;
	
	cout << setw(6)  << score1 << endl;
	cout << setw(10) << score2 << endl;
	cout << setw(12) << score3 << endl;
		

    return 0;
}