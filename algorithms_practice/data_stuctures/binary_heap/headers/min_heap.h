#pragma once

class MinHeap{
    int *heapArray, capacity, heapSize;
    void heapify(int i);
    int parent(int i);
    int left(int i);
    int right(int i);
    public:
        MinHeap(int n);
        void insert(int d);
        void extractMin();
        void getMin();
        void decreaseKey(int d);
        void remove(int d);
};