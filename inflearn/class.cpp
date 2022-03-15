#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Friend
{
public: // access specifier (public, private, protected)
    string name;
    string address;
    int age;
    double height;
    double weight;

    void print()
    {
        cout << name << " " << address << " " << age << " " << height << " " << weight << " " << endl;
    }
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

    vector<Friend> my_friends;
    my_friends.resize(2);

    for(auto &ele: my_friends)
        ele.print();

}