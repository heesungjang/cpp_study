#include <iostream>


int main()
{    
    int x, y;

    x = 5;
    y = ++x; 
    
    // x++ <-- this will first assign x to y and THEN increment x

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    
    return 0;
}