#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Friend
{
    string name;
    string address;
    int age;
    double height;
    double weight;
    void print()
    {
        cout << name << " " << address << " " << age << " " << height << " " << weight << " " << endl;
    };
};

int main()
{
    Friend jj;
    jj.name = "heesung";
    jj.address = "seoul";
    jj.age = 10;
    jj.height = 10;
    jj.weight =20;

    jj.print();
}