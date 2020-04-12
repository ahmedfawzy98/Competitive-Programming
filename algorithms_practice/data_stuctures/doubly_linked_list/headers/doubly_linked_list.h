
#pragma once
#include "node.h"

class DoublyLinkedList{
    Node *head = nullptr;
    Node *tail = nullptr;
    public:
        DoublyLinkedList();
        void appendToFront(int d);
        void appendToTail(int d);
        void deleteFromList(int d);
        bool isEmpty();
        void printList();
};