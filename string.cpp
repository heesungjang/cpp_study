#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{

   cout << "Your age ? : ";
    int age;
    cin >> age;
    // getline(cin, age);

    // cin.ignore(32767,  '\n');
    cin.ignore(numeric_limits<streamsize>::max(),  '\n');

    cout << "Your name ? : ";
    string name;
    // cin >> name;
    getline(cin, name);
 

    cout << name << " " << age << endl;

    return 0;
}