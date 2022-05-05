#include "Heap.h"

void Heap::sort(int* array, int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        validate(array, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        int tmp;
        tmp = array[0];
        array[0] = array[i];
        array[i] = tmp;
        n--;
        validate(array, n, 0);
    }
}

void Heap::validate(int* array, int n, int parentIndex) {
    int maxIndex = parentIndex;
    int leftChild = parentIndex * 2 + 1;
    int rightChild = parentIndex * 2 + 2;

    if (leftChild < n && array[leftChild] > array[maxIndex]) {
        maxIndex = leftChild;
    }
    if (rightChild < n && array[rightChild] > array[maxIndex]) {
        maxIndex = rightChild;
    }
    if (maxIndex != parentIndex) {
        int tmp;
        tmp = array[parentIndex];
        array[parentIndex] = array[maxIndex];
        array[maxIndex] = tmp;
        validate(array, n, maxIndex);
    }
}
