#ifndef HEAP_H
#define HEAP_H

#include "List.h"

class Heap {
    static void heapify(List* list, int heapSize, int parentIndex);

   public:
    static void sort(List* list);
};

#endif