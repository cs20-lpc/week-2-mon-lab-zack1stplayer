#include "Student.hpp"

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