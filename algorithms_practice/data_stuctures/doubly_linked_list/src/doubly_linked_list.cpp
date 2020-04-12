#include <iostream>
#include "../headers/doubly_linked_list.h"

using namespace std;

DoublyLinkedList::DoublyLinkedList(){}

void DoublyLinkedList::appendToFront(int d){
    Node *n = new Node(d);
    if(this->head == nullptr and this->tail == nullptr){
        this->head = this->tail = n;
    }else{
        n->next = this->head;
        this->head->previous = n;
        this->head = n;
    }
}

void DoublyLinkedList::appendToTail(int d){
    Node *n = new Node(d);
    if(this->tail == nullptr and this->head == nullptr){
        this->tail = this->head = n;
    }else{
        n->previous = this->tail;
        this->tail->next = n;
        this->tail = n;
    }
}

void DoublyLinkedList::deleteFromList(int d){
    Node *n = this->head;
    while(n->data != d){
        n = n->next;
    }
    if(n == this->head){
        this->head = this->head->next;
        if(this->head != nullptr)
            this->head->previous = nullptr;
    }
    if(n == this->tail){
        this->tail = this->tail->previous;
        if(this->tail != nullptr)
            this->tail->next = nullptr;
    }
    if(n->previous != nullptr and n->next != nullptr){
        n->previous->next = n->next;
        n->next->previous = n->previous;
    }
    delete(n);
}

bool DoublyLinkedList::isEmpty(){
    return this->head == nullptr && this->tail == nullptr;
}

void DoublyLinkedList::printList(){
    Node *n = this->head;
    while(n != nullptr){
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}