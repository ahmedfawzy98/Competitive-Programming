#pragma once
#include "node.h"

class Tree{
    public:
        void swapNodes(Node *node1, Node *node2);
        Tree();
        Node *root = nullptr;
        void insert(int d);
        void remove(Node *root, int d, Node *parent=nullptr);
        void search(int d);
        void inOrderTraversal(Node *node);
        void preOrderTraversal(Node *node);
        void postOrderTraversal(Node *node);
};