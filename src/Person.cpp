#include "Person.h"

#include <iostream>
#include <string>

bool Person::sortByDate = false;

Person::Person() {}

Person::Person(std::string date, std::string name) {
    this->date = date;
    this->name = name;
}

bool Person::isOlder(Person& other) {
    std::string day, month, year;
    // dd-mm-rrrr
    day = date.substr(0, 2);
    month = date.substr(3, 2);
    year = date.substr(6, 4);

    std::string oDay, oMonth, oYear;
    oDay = other.date.substr(0, 2);
    oMonth = other.date.substr(3, 2);
    oYear = other.date.substr(6, 4);

    if (year != oYear) {
        return year > oYear;
    }
    if (month != oMonth) {
        return month > oMonth;
    }
    return day > oDay;
}

bool Person::nameLower(Person& other) { return name > other.name; }

bool Person::operator>(Person& other) {
    if (sortByDate) {
        return isOlder(other);
    }
    return nameLower(other);
}

Person& Person::operator=(Person& other) {
    this->date = other.date;
    this->name = other.name;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Person& person) {
    os << person.date;
    std::cout << ' ';
    os << person.name << std::endl;
    return os;
}