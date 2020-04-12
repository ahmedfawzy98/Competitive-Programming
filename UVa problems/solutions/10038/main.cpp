#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    int n,tmp;
    while(cin>>n) {
        vector<int> nums,diffs;
        bool t = true;
        for (int i = 0; i < n; ++i) {
            cin>>tmp;
            nums.push_back(tmp);
        }
        for (int j = 0; j < n-1; ++j) {
            diffs.push_back(abs(nums[j] - nums[j+1]));
        }
        sort(diffs.begin(),diffs.end());
        for (int k = 0; k < n-1; ++k) {
            if(diffs[k] != k+1){
                t = false;
                break;
            }
        }
        if(t){
            cout << "Jolly\n";
        }else{
            cout << "Not jolly\n";
        }
    }
    return 0;
}