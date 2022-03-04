#include <iostream>

using namespace std;

int main()
{
    double width = 4.0;
    double length = 6.0;
    double perimeter = 2 * (length * width);
    
    double area = width * length;

    cout << "Length = " << length << endl;
    cout << "Width = " << width << endl;
    cout << "Peremeter = " << perimeter << endl;
    cout << "Area = " << area << endl;

    return 0;
}