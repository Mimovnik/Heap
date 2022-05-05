#include "List.h"

List::List() {
    head = nullptr;
    tail = nullptr;
}

void List::append(TYPE newdata) {
    Node* tmp = new Node(newdata);
    if (head == nullptr) {
        head = tmp;
        tail = tmp;
    } else {
        tmp->prev = tail;
        tail->next = tmp;
        tail = tmp;
    }
}

void List::push(TYPE newdata) {
    Node* tmp = new Node(newdata);
    if (head == nullptr) {
        head = tmp;
        tail = tmp;
    } else {
        tmp->next = head;
        head->prev = tmp;
        head = tmp;
    }
}

void List::insertAt(int index, TYPE newdata) {
    if (index == 0) {
        push(newdata);
        return;
    }
    if (index == getSize()) {
        append(newdata);
        return;
    }
    Node* current = getByIndex(index);
    Node* tmp = new Node(newdata);

    current->prev->next = tmp;
    tmp->next = current;
    tmp->prev = current->prev;
    current->prev = tmp;
}

void List::pop() {
    head = head->next;
    delete head->prev;
    head->prev = nullptr;
}

void List::removeLast() {
    tail = tail->prev;
    delete tail->next;
    tail->next = nullptr;
}

void List::removeAt(int index) {
    if (index == 0) {
        pop();
        return;
    }
    if (index == getSize()-1) {
        removeLast();
        return;
    }
    Node* current = getByIndex(index);
    current->prev->next = current->next;
    current->next->prev = current->prev;
    delete current;
}

int List::getSize() const {
    Node* tmp = head;
    int size = 0;
    while (tmp != nullptr) {
        size++;
        tmp = tmp->next;
    }
    return size;
}

Node* List::getByIndex(int index) {
    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    return current;
}

void List::print() const {
    Node* tmp = head;
    while (tmp != nullptr) {
        std::cout << tmp->data;
        tmp = tmp->next;
    }
}

void List::printAt(int index) {
    Node* current = getByIndex(index);
    std::cout << current->data << std::endl;
}

void List::destroy() {
    Node* tmp = head;
    while (tmp->next != nullptr) {
        tmp = tmp->next;
        delete tmp->prev;
    }

    delete tail;
}