#include <iostream>

using namespace std;

class Simple
{
private:
    int _id;

public:
    Simple(const int& id)
        : _id(id)
    {
        cout << "Constructor " << _id << endl;
    }

    ~Simple()
    {
        cout << "Destructor " << _id << endl;
    }

    int getId()
    {
        return _id;
    }
};

int main()
{
    // Simple sim1(0);
    Simple *s1 = new Simple(0);
    Simple s2(1);

    delete s1;
    
    return 0;
}