#include "Heap.h"

#include "Person.h"

void Heap::sort(List* list) {
    int n = list->getSize();
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(list, i);
    }

    for (int i = n - 1; i > 0; i--) {
        Person tmp;
        tmp = list->getByIndex(0)->data;
        list->getByIndex(0)->data = list->getByIndex(i)->data;
        list->getByIndex(i)->data = tmp;
        n--;
        heapify(list, 0);
    }
}

void Heap::heapify(List* list, int parentIndex) {
    int n = list->getSize();
    int maxIndex = parentIndex;
    int leftChild = parentIndex * 2 + 1;
    int rightChild = parentIndex * 2 + 2;

    // if (rightChild < n && array[rightChild] > array[maxIndex]) {
    //     maxIndex = rightChild;
    // }
    // if (leftChild < n && array[leftChild] > array[maxIndex]) {
    //     maxIndex = leftChild;
    // }
    // if (maxIndex != parentIndex) {
    //     int tmp;
    //     tmp = array[parentIndex];
    //     array[parentIndex] = array[maxIndex];
    //     array[maxIndex] = tmp;
    //     heapify(array, n, maxIndex);
    // }
}
