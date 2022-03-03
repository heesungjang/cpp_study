#include <iostream>

using namespace std;

int main()
{
    double length;
    double width;
    double premiter = 2 * (length + width);
    double area = length * width;

    cout << "Length is " << length << endl;
    cout << "width is " << width << endl;
    cout << "premiter is " << premiter << endl;
    cout << "area is " << area << endl;

    return 0;
}