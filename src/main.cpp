#include <iostream>

#include "Commands.h"
#include "List.h"
#include "Person.h"
int main() {
    Person p1("10-01-2004", "Natalia");
    Person p2("02-08-2002", "Kuba");
    Person p3("02-04-2004", "Stachu");
    std::cout << p1.isOlder(p3);
    // char command;
    // List list;
    // bool running = true;
    // while (running) {
    //     std::cin >> command;
    //     switch (command) {
    //         case '+':
    //             add(&list);
    //             break;
    //         case '-':
    //             remove(&list);
    //             break;
    //         case 'p':
    //             print(&list);
    //             break;
    //         case 'r':
    //             changeOrder(&list);
    //             break;
    //         case 'q':
    //             running = false;
    //             break;
    //     }
    // }
    return 0;
}
