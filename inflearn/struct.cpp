#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
    int m_month;
    int m_day;
    int m_year;

public:
    void setDate(const int& month_input, const int& day_input, 
                          const int& year_input)
    {
        m_month = month_input;
        m_day = day_input;
        m_year = year_input;
    }

    void setMonth(const int& month_input) // setters
    {
        m_month = month_input;
    }

    const int& getDate() // getters
    {
        return m_day;
    }

    void copyFrom(const Date& original)
    {
        m_month = original.m_month;
        m_day = original.m_day;
        m_year = original.m_year;
    }

};

int main()
{
    Date today;
    today.setDate(8, 4, 2025);
    today.setMonth(3);
    cout << today.getDate() << endl;

    Date copy;
    copy.copyFrom(today);
    cout << copy.getDate() << endl;
    
}