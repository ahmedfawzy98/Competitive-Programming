
#pragma once

#include "node.h"
class LinkedList{
    Node *head = nullptr;
    Node *tail = nullptr;
    public:
        LinkedList();
        void appendToTail(int d);
        void appendToFront(int d);
        void deleteFromList(int d);
        bool isEmpty();
        void printList();
};