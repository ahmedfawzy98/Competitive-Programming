#pragma once

class Node{
    public:
        int data;
        Node *next = nullptr;
        Node(int d);
        void print_data();
        void appendToTail(int d);
        Node* deleteNode(int d);
        Node* appendToFront(int d);
        void printList();
};