#include <iostream>

#include "Commands.h"
#include "Heap.h"

int main() {
    char command;
    int n;
    std::cout << "Wpisz rozmiar tablicy\n";
    std::cin >> n;
    int* array = new int[n];
    std::cout << "Wpisz " << n << " liczb calkowitych\n";
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }
    Heap::sort(array, n);
    for(int i = 0; i < n; i++){
        std::cout << array[i] << " ";
    }
    return 0;
    // Heap heap;
    // bool running = true;
    // while (running) {
    //     std::cin >> command;
    //     switch (command) {
    //         case '+':
    //             add(&heap);
    //             break;
    //         case '-':
    //             break;
    //         case 'p':
    //             break;
    //         case 'r':
    //             break;
    //         case 'q':
    //             running = false;
    //             break;
    //     }
    // }
    // return 0;
}
