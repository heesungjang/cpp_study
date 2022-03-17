#include <iostream>
#include <string>

using namespace std;


class Class1 {
    private:
        string _firstName;

    public:
        Class1(const string firstName)
            : _firstName(firstName) {}

        string getName() const { return _firstName;}
};

class Class2: public Class1 { 
    private:
        string _secondName;

    public:
        Class2(const string firstName, const string secondName)
            : Class1(firstName), _secondName(secondName) {}
    
        void getFullName() const {
            cout << getName() << " " << _secondName << endl;;
        }
};


int main() {

    Class2 course("heesung", "jang");

    course.getFullName();

    return 0;
}