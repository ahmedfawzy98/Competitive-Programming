#include <iostream>
using namespace std;

int partition(int left, int right, int array[]){
    int pivot = array[right], x = left - 1;
    for (int i = left; i <= right - 1; ++i) {
        if(array[i] < pivot){
            x++;
            int a = array[x];
            array[x] = array[i];
            array[i] = a;
        }
    }
    int a = array[x + 1];
    array[x + 1] = pivot;
    array[right] = a;
    return x + 1;
}

void quick_sort(int left, int right, int array[]){
    if (left < right){
        int pi = partition(left, right, array);
        quick_sort(left, pi - 1, array);
        quick_sort(pi + 1, right, array);
    }
}

void print_array(int array[], int size){
    for (int i = 0; i < size; ++i) {
        cout << array[i];
        if(i + 1 == size){cout << endl;}
        else{cout << " ";}
    }
}

int main() {
    int array[] = {5, 8, 1, -2, -9, 10, 2,  15}, size = sizeof(array) / sizeof(int);
    cout << "Array before sorting = "; print_array(array, size);
    quick_sort(0, size - 1, array);
    cout << "Array after sorting = "; print_array(array, size);
    return 0;
}