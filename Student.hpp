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

Student::Student()
{
    this->name = new string();
    this->age = new int();
    cout << "Student object created" << endl;
}

Student::~Student()
{
    delete this->name;
    delete this->age;
    cout << "Student object destroyed" << endl;
}

void Student::setName(string var) {
    *this->name = var;
}

string Student::getName() const {
    return *this->name;
}

void Student::setAge(int var) {
    *this->age = var;
}

int Student::getAge() const {
    return *this->age;
}