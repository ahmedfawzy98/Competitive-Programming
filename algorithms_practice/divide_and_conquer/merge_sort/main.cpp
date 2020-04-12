#include <iostream>

using namespace std;

void merge(int start, int mid, int end, int array[]){
    int n1 = mid - start + 1, n2 = end - mid, i = 0, j = 0, x = start;
    int left[n1], right[n2];
    for (int k = 0; k < n1; ++k) {
        left[k] = array[start + k];
    }
    for (int l = 0; l < n2; ++l) {
        right[l] = array[mid + 1 + l];
    }
    while (i < n1 && j < n2){
        if(left[i] < right[j]){
            array[x] = left[i];
            i++;
        }else{
            array[x] = right[j];
            j++;
        }
        x++;
    }
    while(i < n1){
        array[x] = left[i];
        i++; x++;
    }
    while(j < n2){
        array[x] = right[j];
        j++; x++;
    }
}

void merge_sort(int start, int end, int array[]){
    if(start < end){
        int mid = start + (end - start) / 2;
        merge_sort(start, mid, array);
        merge_sort(mid + 1, end, array);
        merge(start, mid, end, array);
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
    int array[] = {5, 1, -2, 8, 9, 2, 10};
    int size = sizeof(array) / sizeof(int);
    cout << "Array before sorting  = ";
    print_array(array, size);
    merge_sort(0, size - 1, array);
    cout << "Array after sorting  = ";
    print_array(array, size);
    return 0;
}