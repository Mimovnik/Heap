#ifndef HEAP_H
#define HEAP_H

class Heap {
    static void validate(int* array, int n, int parentIndex);
   public:
    static void sort(int* array, int n);

};

#endif