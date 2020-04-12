#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n){
        int nums[n];
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }
        int sumS = 0, sumD = 0, start = 0, end = n - 1;
        while (start <= end){
            if (nums[start] > nums[end]){
                sumS += nums[start];
                start++;
            }else{
                sumS += nums[end];
                end--;
            }
            if (start > end){
                break;
            }
            if (nums[start] > nums[end]){
                sumD += nums[start];
                start++;
            }else{
                sumD += nums[end];
                end--;
            }
        }
        cout << sumS << " " << sumD << endl;
    }
    return 0;
}