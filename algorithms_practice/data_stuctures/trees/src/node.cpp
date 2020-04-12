#include <iostream>
#include "../headers/node.h"

using namespace std;

Node::Node(int d) : data(d){}

void Node::visit(){
    cout << this->data << " ";
}

bool Node::isLeaf(){
    return this->left == nullptr and this->right == nullptr;
}

bool Node::hasOneChild(){
    return this->left == nullptr or this->right == nullptr;
}

bool Node::hasLeftChild(){
    return this->left != nullptr;
}

bool Node::hasRightChild(){
    return this->right != nullptr;
}

Node* Node::getSuccessor(Node *node){
    while(node->left != nullptr){
        node = node->left;
    }
    return node;
}

void Node::insert(int d){
    Node *n = new Node(d);
    Node *node = this, *parent = nullptr;
    while(node != nullptr){
        if(n->data <= node->data){
            parent = node;
            node = node->left;
            }
        else{
            parent = node;
            node = node->right;
            }
    }
    if(n->data < parent->data){
        parent->left = n;
    }else{
        parent->right = n;
    }
}

// void Node::remove(int d){
//     Node *node = this, *parent = nullptr;
//     while(node->data != d){
//         if(d <= node->data){parent = node; node = node->left;}
//         else{parent = node; node = node->right;}
//     }
//     if(isLeaf(node)){
//         if(node == this){node = nullptr;}
//         else if(node == parent->left){parent->left = nullptr;}
//         else{parent->right = nullptr;}
//     }
//     else if(hasOneChild(node)){
//         if(node == this){
//             if(node->left != nullptr){
//                 node = node->left;
//             }else{
//                 node = node->right;
//             }
//         }
//         else if(node == parent->left){
//             if(node->left != nullptr){
//                 parent->left = node->left;
//                 delete(node);
//             }else{
//                 parent->left = node->right;
//                 delete(node);
//             }
//         }else{
//             if(node->left != nullptr){
//                 parent->right = node->left;
//                 delete(node);
//             }else{
//                 parent->right = node->right;
//                 delete(node);
//             }
//         }
//     }else{
//         Node *parent = node, *successor = getSuccessor(node->right, &parent);
//         if(isLeaf(successor)){
//             node->data = successor->data;
//             if(isLeftChild(parent, successor)){parent->left = nullptr;}
//             else{parent->right = nullptr;}
//         }else{
//             node->data = successor->data;
//             parent->left = successor->right;
//         }
//         delete(successor);
//     }
// }

// void Node::inOrderTraversal(Node *node){
//     if(node != nullptr){
//         inOrderTraversal(node->left);
//         visit(node);
//         inOrderTraversal(node->right);
//     }
// }

// void Node::preOrderTraversal(Node *node){
//     if(node != nullptr){
//         visit(node);
//         preOrderTraversal(node->left);
//         preOrderTraversal(node->right);
//     }
// }

// void Node::postOrderTraversal(Node *node){
//     if(node != nullptr){
//         postOrderTraversal(node->left);
//         postOrderTraversal(node->right);
//         visit(node);
//     }
// }