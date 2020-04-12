#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, r;
    while (cin >> k >> r){
        int counter = 1, remain = k % 10, tmp = k;
        while (remain != r and remain){
            counter++;
            tmp += k;
            remain = tmp % 10;
        }
        cout << counter << endl;
    }
    return 0;
}