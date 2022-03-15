#include <iostream>
#include <string>

using namespace std;



class Person
{
private:
    string _name;
    int _age;

public:
    Person(const string name, const int age)
        : _name(name), _age(age)
        {}

    void print()
    {
        cout << "my name is " << _name << " and I'm " 
                << _age << " old" << endl;
    }
};

class Employ : public person
{
public:
    void getPaid()
    {
        cout << "You have received your salary!" << endl;
    }
}



int main()
{
    Person person("heesung", 30);
    person.print();

    Employ employ("heesung", 30);
    employ.getPaid();

    return 0;
}
