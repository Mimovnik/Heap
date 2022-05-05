#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
   public:
    static bool sortByDate;
    std::string date;
    std::string name;

    Person();

    Person(std::string date, std::string name);

    Person& operator=(Person& other);


    bool isOlder(Person& other);

    bool nameLower(Person& other);

    bool operator>(Person& other);

    friend std::ostream& operator<<(std::ostream& os, const Person& person);
};
#endif