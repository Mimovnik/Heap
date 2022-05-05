#include "Person.h"
#include <iostream>

Person& Person::operator=(Person& right) {
    this->date = right.date;
    this->name = right.name;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Person& person){
    os << person.date;
    std::cout << ' ';
    os << person.name << std::endl;
    return os;
}