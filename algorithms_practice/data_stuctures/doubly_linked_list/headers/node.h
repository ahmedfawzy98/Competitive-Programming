
#pragma once
class Node{
    public:
        Node *next = nullptr;
        Node *previous = nullptr;
        int data;
        Node(int d);
};