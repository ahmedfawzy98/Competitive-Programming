#include <iostream>
#include "../headers/linked_list.h"

using namespace std;

int main(int, char**) {
    LinkedList list = LinkedList();
    list.appendToTail(10);
    list.appendToTail(7);
    list.printList();
    list.appendToFront(4);
    list.printList();
    list.appendToFront(20);
    list.appendToFront(50);
    list.printList();
    list.deleteFromList(7);
    list.deleteFromList(4);
    list.printList();
    list.deleteFromList(50);
    list.printList();
    list.deleteFromList(20);
    list.deleteFromList(10);
    list.printList();
    cout << (list.isEmpty() ? "List is empty" : "list is not empty") << endl;
    list.appendToFront(1);
    list.appendToTail(2);
    list.printList();
    return 0;
}
