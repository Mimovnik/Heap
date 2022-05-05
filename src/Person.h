#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
   public:
    std::string date;
    std::string name;

    Person& operator=(Person& right);

    friend std::ostream& operator<<(std::ostream& os, const Person& person);
};
#endif