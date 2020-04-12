#include <iostream>
#include "../headers/tree.h"

using namespace std;

Tree::Tree(){}

void Tree::swapNodes(Node *node1, Node *node2){
    int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
}

void Tree::insert(int d){
    Node *n = new Node(d), *temp = root, *parent = nullptr;
    if(root == nullptr){
        root = n;
    }else{
        while(temp != nullptr){
            parent = temp;
            if(n->data < temp->data){
                temp = temp->left;
            }else{
                temp = temp->right; 
            }
        }
        if(n->data < parent->data){
            parent->left = n;
        }else{
            parent->right = n;
        }
    }
}

void Tree::search(int d){
    Node *temp = root;
    while(temp != nullptr and temp->data != d){
        if(d < temp->data){temp = temp->left;}
        else{temp = temp->right;}
    }
    if(temp == nullptr){cout << "value is not found in tree" << endl;}
    else{cout << "value is found in tree" << endl;}
}

void Tree::remove(Node *start, int d, Node *parent){
    Node *temp = start;
    while(temp->data != d){
        parent = temp;
        if(d < temp->data){temp = temp->left;}
        else{temp = temp->right;}
    }
    if(temp->isLeaf()){
        if(temp == root){root = nullptr;}
        else if(temp == parent->left){parent->left = nullptr;}
        else{parent->right = nullptr;}
    }else if(temp->hasOneChild()){
        if(temp == root){
            if(temp->left != nullptr){root = temp->left;}
            else{root = temp->right;}
        }else if(temp == parent->left){
            if(temp->hasLeftChild()){parent->left = temp->left;}
            else{parent->left = temp->right;}
        }else{
            if(temp->hasLeftChild()){parent->right = temp->left;}
            else{parent->right = temp->right;}
        }
    }else{
        Node* successor = temp->getSuccessor(temp->right);
        temp->data = successor->data;
        remove(temp->right, successor->data, temp);
    }
}

void Tree::inOrderTraversal(Node *node){
    if(node != nullptr){
        inOrderTraversal(node->left);
        node->visit();
        inOrderTraversal(node->right);
    }
}

void Tree::preOrderTraversal(Node *node){
    if(node != nullptr){
        node->visit();
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }
}

void Tree::postOrderTraversal(Node *node){
    if(node != nullptr){
        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        node->visit();
    }
}