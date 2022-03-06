#include <iostream>


using namespace std;

void isLegalAge()
{
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    
    if(age < 18){
        cout << "You are too young to vote!" << endl;
    }else {
        cout << "Tomorrow is voting day, please show up and vote!" << endl;
    }

}

int main()
{

    isLegalAge();

    return 0;
}