#include <iostream>
#include <climits>
using namespace std;

int max_crossing_sum(int left, int mid, int right, const int array[]){
    int max_sum = 0, left_sum = INT_MIN, right_sum = INT_MIN;
    for (int i = mid; i >= left ; --i) {
        max_sum += array[i];
        if(max_sum > left_sum){
            left_sum = max_sum;
        }
    }
    max_sum = 0;
    for (int j = mid + 1; j <= right ; ++j) {
        max_sum += array[j];
        if(max_sum > right_sum){
            right_sum = max_sum;
        }
    }
    return left_sum + right_sum;
}

int max_subarray_sum(int left, int right, int array[]){
    if(left == right){
        return array[left];
    }
    int mid = left + (right - left) / 2;
    return max(max(max_subarray_sum(left, mid, array), max_subarray_sum(mid + 1, right, array)),
    max_crossing_sum(left, mid, right, array));
}

int main() {
    int array[] = {2, 3, 4, 5, 7}, size = sizeof(array) / sizeof(int);
    cout << "Maximum contiguous sum = " << max_subarray_sum(0, size - 1, array) << endl;
    return 0;
}