#include <iostream>
#include "../headers/min_heap.h"

using namespace std;

int main(int, char**) {
    MinHeap heap = MinHeap(11);
    heap.insert(3);
    heap.insert(2);
    heap.insert(1);
    heap.insert(15);
    heap.insert(5);
    heap.insert(4);
    heap.insert(45);
    heap.getMin();
    heap.extractMin();
    heap.getMin();
    heap.extractMin();
    heap.getMin();
    heap.extractMin();
    heap.getMin();
    heap.extractMin();
    heap.getMin();
    heap.extractMin();
    heap.getMin();
    heap.extractMin();
    heap.getMin();
    heap.extractMin();
    heap.extractMin();
    return 0;
}
