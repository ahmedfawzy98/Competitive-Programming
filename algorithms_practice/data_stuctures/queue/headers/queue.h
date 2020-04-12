#pragma once
#include "node.h"

class Queue{
    Node *first = nullptr;
    Node *last = nullptr;
    public:
        Queue();
        void add(int d);
        void remove();
        int peek();
        bool isEmpty();
        void printQueue();
};