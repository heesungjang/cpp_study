#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int _id;
    string _name;

public:
    Student(const int& id, const string& name )
    {
        init(id , name);
    }

    void init(const int& id, const string& name )
    {
        _id = id;
        _name = name;
    }

    string getName()
    {
        return _name;
    }
};


int main()
{
    Student st1(0, "heesung");

    cout << st1.getName() << endl;

    return 0;
}