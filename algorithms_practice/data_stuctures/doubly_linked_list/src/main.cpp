#include <iostream>
#include "../headers/doubly_linked_list.h"

using namespace std;

int main(int, char**) {
    DoublyLinkedList list = DoublyLinkedList();
    list.appendToTail(6);
    list.appendToFront(3);
    list.appendToFront(9);
    list.appendToTail(8);
    list.appendToTail(1);
    list.printList();
    list.deleteFromList(8);
    list.deleteFromList(9);
    list.deleteFromList(1);
    list.printList();
    cout << (list.isEmpty() ? "List is empty" : "List is not empty") << endl;
    list.deleteFromList(6);
    list.deleteFromList(3);
    list.printList();
    cout << (list.isEmpty() ? "List is empty" : "List is not empty") << endl;
    list.appendToTail(14);
    list.appendToFront(15);
    list.printList();
    return 0;
}
