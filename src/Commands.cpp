#include "Commands.h"

#include <iostream>
#include <string>

#include "Heap.h"
#include "Person.h"

void add(List* list) {
    int n;
    std::cin >> n;
    while (n--) {
        std::string date, name;
        std::cin >> date >> name;

        list->append(Person(date, name));

        Heap::sort(list);
    }
}

void remove(List* list) {}

void print(List* list) {}

void changeOrdert(List* list) {}
