#pragma once

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string* name;
    int* age;
public:
    Student();
    ~Student();
    void setName(string var);
    string getName() const;
    void setAge(int var);
    int getAge() const;
};