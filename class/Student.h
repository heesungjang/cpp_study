#pragma once

#include <iostream>
#include <string>


class Student
{
private:
    string m_name;
    int m_intel;

public:
    Student(const string & name_in = "No name"< const int & intel_in = 0)
        : m_name(name_in), m_intel(intel_in)
    {}

    void setName(const string & name_in)
    {
        m_name = name_in;
    }

    string getName()
    {
        return m_name;
    }

    void setIntel(const int & intel_in)
    {
        m_intel = intel_in;
    }

    int getIntel()
    {
        return m_intel;
    }

};