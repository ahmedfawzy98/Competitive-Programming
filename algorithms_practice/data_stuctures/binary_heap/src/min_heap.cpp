#include <iostream>
#include "../headers/min_heap.h"

using namespace std;

MinHeap::MinHeap(int n){
    heapArray = new int[n];
    capacity = n;
    heapSize = 0;
}

void MinHeap::getMin(){
    cout << "Min value = " << heapArray[0] << endl;
}

int MinHeap::parent(int i){return (i - 1) / 2;}
int MinHeap::left(int i){return (2 * i + 1);}
int MinHeap::right(int i){return (2 * i + 2);}

void MinHeap::heapify(int i){
    int smallest = i, l = left(i), r = right(i);
    if(l < heapSize and heapArray[l] < heapArray[i]){
        smallest = l;
    }
    if(r < heapSize and heapArray[r] < heapArray[smallest]){
        smallest = r;
    }
    if(smallest != i){
        swap(heapArray[i], heapArray[smallest]);
        heapify(smallest);
    }
}


void MinHeap::insert(int d){
    if(capacity == heapSize){cout << "Overflow execption" << endl;}
    heapSize++;
    int i = heapSize - 1;
    heapArray[i] = d;
    while(i != 0 and heapArray[parent(i)] > heapArray[i]){
        swap(heapArray[parent(i)], heapArray[i]);
        i = parent(i);
    }
}

void MinHeap::extractMin(){
    if(heapSize == 0){cout << "Underflow execption" << endl;}
    else{
        heapArray[0] = heapArray[heapSize - 1];
        heapSize--;
        heapify(0);
    }
}