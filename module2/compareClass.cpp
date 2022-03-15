#include <iostream>
#include <string>

using namespace std;


class Clock
{
private:
    int _h;
    int _m;
    int _s;

public:
    Clock(const int h, const int m, const int s)
        : _h(h), _m(m), _s(s)
    {}

    bool equalTime(Clock) const;
    int getHour() const;
    int getMinute() const;
    int getSecond() const;
    
};


int main()
{
    cout << boolalpha;

    Clock clock1(1, 2, 3);
    Clock clock2(2, 3, 4);
    cout << clock1.equalTime(clock2) << endl;

    clock2 = clock1;
    cout << clock1.equalTime(clock2) << endl;

    Clock clocks[3] = {Clock(1,2,3), Clock(2,3,4), Clock(5,4,3)};

    cout << clocks[0].getHour() << endl;

    return 0;
}

bool Clock::equalTime(Clock anotherObject) const {
    bool isSame = (_h == anotherObject.getHour() 
                            && _m == anotherObject.getMinute() 
                            && _s == anotherObject.getSecond());

    if (isSame){
            return true;
        } else {
            return false;
        }
}

int Clock::getHour() const {
    return _h;
}

int Clock::getMinute() const {
    return _m;
} 

int Clock::getSecond() const {
    return _s;
}


