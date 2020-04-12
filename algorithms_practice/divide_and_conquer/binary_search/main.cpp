#include <iostream>

using namespace std;

int binary_search_recursion(int target, int start, int end, int array[]){
    int mid = start + (end - start) / 2;
    if(start > end){
        return -1;
    }
    if(target == array[mid]){
        return mid;
    }
    else if(array[mid] < target){
        return binary_search_recursion(target, mid + 1, end, array);
    }
    else{
        return binary_search_recursion(target, start, mid - 1, array);
    }
}

int binary_search_iterative(int target, const int array[], int size){
    int start = 0, end = size - 1;
    while (end >= start){
        int mid = start + (end - start) / 2;
        if(target == array[mid]){
            return mid;
        }
        else if(target > array[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int array[] = {1,2,3,5,8,9,10,22};
    int size = sizeof(array) / sizeof(int);
    int result  = binary_search_recursion(5, 0, size - 1, array);
    if (result == -1){
        cout << "Target is not found." << endl;
    }else{
        cout << "Target's index (recursion)= " << result << endl;
    }
    result  = binary_search_iterative(5, array, size);
    if (result == -1){
        cout << "Target is not found." << endl;
    }else{
        cout << "Target's index (iterative)= " << result << endl;
    }

    return 0;
}