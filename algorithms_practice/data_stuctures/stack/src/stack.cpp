#include <iostream>
#include "../headers/stack.h"

using namespace std;

Stack::Stack(){}

void Stack::push(int d){
    Node *n = new Node(d);
    if(this->top == nullptr){
        this->top = n;
    }else{
        n->next = this->top;
        this->top = n;
    }
}

void Stack::pop(){
    if(this->top == nullptr){
        cout << "Underflow execption" << endl;
    }else{
    Node *n = this->top;
    this->top = this->top->next;
    delete(n);
    }
}

int Stack::peek(){
    return this->top->data;
}

bool Stack::isEmpty(){
    return this->top == nullptr;
}

void Stack::printStack(){
    Node *n = this->top;
    while(n != nullptr){
        cout << n->data << " ";
        n = n->next;
    }
    if(this->top != nullptr){cout << endl;}
}