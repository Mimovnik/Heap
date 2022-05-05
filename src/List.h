#ifndef LIST_H
#define LIST_H

#include <iostream>

#include "Person.h"
#define TYPE Person
struct Node {
    TYPE data;
    struct Node* next;
    struct Node* prev;

    Node() {
        next = nullptr;
        prev = nullptr;
    }

    Node(TYPE data) {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};

class List {
    Node* head;
    Node* tail;

   public:
    List();

    void append(TYPE newdata);

    void push(TYPE newdata);

    void insertAt(int index, TYPE newdata);

    void pop();

    void removeLast();

    void removeAt(int index);

    int getSize() const;

    Node* getByIndex(int index);

    void print() const;

    void printAt(int index);

    void destroy();

    List& operator=(List& right);
};

#endif