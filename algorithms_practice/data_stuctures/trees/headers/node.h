#pragma once

class Node{
    public:
        int data;
        Node *left = nullptr;
        Node *right = nullptr;
        Node(int d);
        void visit();
        void insert(int d);
        void remove(int d);
        bool isLeaf();
        bool hasLeftChild();
        bool hasRightChild();
        bool hasOneChild();
        Node* getSuccessor(Node* node);
        // void inOrderTraversal(Node *node);
        // void preOrderTraversal(Node *node);
        // void postOrderTraversal(Node *node);
};