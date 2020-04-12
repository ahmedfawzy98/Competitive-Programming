
#pragma once
#include "node.h"

class Stack{
    Node *top = nullptr;
    public:
        Stack();
        void pop();
        void push(int d);
        int peek();
        bool isEmpty();
        void printStack();
};