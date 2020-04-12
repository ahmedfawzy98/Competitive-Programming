#include <iostream>
#include "../headers/node.h"

using namespace std;

Node::Node(int d) : data(d){}

void Node::appendToTail(int d){
    Node *newTail = new Node(d);
    Node *n = this;
    while(n->next != NULL){
        n = n->next;
    }
    n->next = newTail;
}

Node* Node::appendToFront(int d){
    Node *n = new Node(d);
    n->next = this;
    return n;
}

Node* Node::deleteNode(int d){
    Node *n = this->next;
    Node *prev = this;
    if(prev->data == d){
        prev->next = NULL;
        delete(prev);
        return n;
    }else{
    while(n->data != d){
        prev = n;
        n = n->next;
    }
    prev->next = n->next;
    delete(n);
    return this;
    }
}

void Node::printList(){
    Node *n = this;
    while(n != NULL){
        cout << "Data = " << n->data << endl;
        n = n->next;
    }
}

void Node::print_data(){
    cout << "Data value = " << data << endl;
}