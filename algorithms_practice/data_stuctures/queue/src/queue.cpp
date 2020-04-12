#include <iostream>
#include "../headers/queue.h"

using namespace std;

Queue::Queue(){}

void Queue::add(int d){
    Node *n = new Node(d);
    if(this->first == nullptr){
        this->first = this->last = n;
    }else{
    this->last->next = n;
    this->last = n;
    }
}

void Queue::remove(){
    if(this->first == nullptr){
        cout << "Underflow execption" << endl;
    }else{
    Node *n = this->first;
    this->first = this->first->next;
    delete(n);
    }
}

int Queue::peek(){
    return this->first->data;
}

bool Queue::isEmpty(){
    return this->first == nullptr;
}

void Queue::printQueue(){
    Node *n = this->first;
    while(n != nullptr){
        cout << n->data << " ";
        n = n->next;
    }
    if(this->first != nullptr){cout << endl;}
}