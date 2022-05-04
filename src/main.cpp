#include <iostream>


int main() {
    int n;
    std::cin >> n;
    // Catch newline characted
    std::cin.get();


    // Enter numbers
    char c;
    for (int i = 0; i < n; i++) {
        do {
            std::cin.get(c);
            if (c != '\n') numbers[i].append(c);
        } while (c != '\n');
    }

    
    // Sort numbers

    // Print all numbers
    for (int i = 0; i < n; i++) {
        numbers[i].print();
        std::cout << std::endl;
    }
}
