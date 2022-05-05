#include <iostream>

#include "Commands.h"
#include "List.h"
#include "Person.h"
int main() {
    // Person p1("01-01-1001", "Glenn");
    // Person p2("02-01-2001", "Harris");
    // std::string a = "Pink";
    // std::string b = "John";
    // std::cout << (a < b);
    char command;
    List list;
    bool running = true;
    while (running) {
        std::cin >> command;
        switch (command) {
            case '+':
                add(&list);
                break;
            case '-':
                remove(&list);
                break;
            case 'p':
                print(&list);
                break;
            case 'r':
                changeOrder(&list);
                break;
            case 'q':
                running = false;
                list.destroy();
                break;
        }
    }
    return 0;
}
