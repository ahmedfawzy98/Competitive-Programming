#include <iostream>
#include "../headers/linked_list.h"

using namespace std;

LinkedList::LinkedList(){}

void LinkedList::appendToTail(int d){
    Node *n = new Node(d);
    if(this->tail == nullptr && this->head == nullptr){
        this->tail = this->head =  n;
    }else{
        this->tail->next = n;
        this->tail = n;
    }
}

void LinkedList::appendToFront(int d){
    Node *n = new Node(d);
    if(this->head == nullptr && this->tail == nullptr){
        this->head = this->tail = n;
    }else{
        n->next = this->head;
        this->head = n;
    }
}

void LinkedList::deleteFromList(int d){
    Node *n = this->head;
    Node *prev = nullptr;
    while(n->data != d){
        prev = n;
        n = n->next;
    }
    if(n == this->head){
        this->head = this->head->next;
    }
    if(n == this->tail){
        this->tail = prev;
    }
    if(prev != nullptr){
        prev->next = n->next;
    }
    delete(n);
}

bool LinkedList::isEmpty(){
    return this->head == nullptr && this->tail == nullptr;
}

void LinkedList::printList(){
    Node *n = this->head;
    while(n != nullptr){
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}