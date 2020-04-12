#include <iostream>
using namespace std;

int merge(int l, int m, int r, int array[]){
    int temp[r - l + 2], i = l, k = l, j = m + 1, inversion_count = 0;
    while((i <= m) && (j <= r)){
        if(array[i] <= array[j]){
            temp[k] = array[i];
            i++;
        }else{
            temp[k] = array[j];
            j++;
            inversion_count += (m + 1 - i);
        }
        k++;
    }
    while(i <= m){
        temp[k++] = array[i++];
    }
    while(j <= r){
        temp[k++] = array[j++];
    }
    for (int n = l; n <= r; ++n) {
        array[n] = temp[n];
    }
    return inversion_count;

}

int merge_sort(int left, int right, int array[]){
    int inversion_count = 0;
    if(left < right){
        int mid = left + (right - left) / 2;
        inversion_count = merge_sort(left, mid, array);
        inversion_count += merge_sort(mid + 1, right, array);
        inversion_count += merge(left, mid, right, array);
    }
    return inversion_count;
}
void print_array(int array[], int size){
    for (int i = 0; i < size; ++i) {
        cout << array[i];
        if(i + 1 == size){cout << endl;}
        else{cout << " ";}
    }
}

int main() {
    int array[] = {2, 4, 1, 3, 5}, size = sizeof(array) / sizeof(int);
    cout << "Array before sorting = "; print_array(array, size);
    cout << "Number of inversions = " << merge_sort(0, size - 1, array) << endl;
    cout << "Array after sorting = "; print_array(array, size);
    return 0;
}