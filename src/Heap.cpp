#include "Heap.h"

#include "Person.h"

void Heap::sort(List* list) {
    int n = list->getSize();
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(list, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        Person tmp;
        tmp = list->getByIndex(0)->data;
        list->getByIndex(0)->data = list->getByIndex(i)->data;
        list->getByIndex(i)->data = tmp;
        n--;
        heapify(list, n, 0);
    }
}

void Heap::heapify(List* list, int heapSize, int parentIndex) {
    int maxIndex = parentIndex;
    int leftChild = parentIndex * 2 + 1;
    int rightChild = parentIndex * 2 + 2;

    if (rightChild < heapSize &&
        list->getByIndex(rightChild)->data > list->getByIndex(maxIndex)->data) {
        maxIndex = rightChild;
    }
    if (leftChild < heapSize &&
        list->getByIndex(leftChild)->data > list->getByIndex(maxIndex)->data) {
        maxIndex = leftChild;
    }
    if (maxIndex != parentIndex) {
        Person tmp;
        tmp = list->getByIndex(parentIndex)->data;
        list->getByIndex(parentIndex)->data = list->getByIndex(maxIndex)->data;
        list->getByIndex(maxIndex)->data = tmp;
        heapify(list, heapSize, maxIndex);
    }
}
