#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

typedef struct{
    int B,CD, D;
    vector<int> l, u, indexes;
}Arr;

int physicalAddress(Arr a){
    int tmp, c0 = a.B, sum, j;
    int constants[a.D];
    tmp  = a.CD;
    for ( j = a.D-2; j >= 0; --j) {
        tmp = tmp * (a.u[j+1] - a.l[j+1] + 1);
        constants[j] = tmp;
    }
    constants[a.D-1] = a.CD;
    for (int k = 0; k < a.D; ++k) {
        c0 -= constants[k] * a.l[k];
    }
    sum = c0;
    for (int i = 0; i < a.D; ++i) {
        sum += constants[i] * a.indexes[i];
    }
    return sum;

}
int main() {
    int n,r,tm;
    string tmp;
    map<string, Arr> arrays;
    cin>>n>>r;
    for (int i = 0; i < n; ++i) {
        Arr a;
        cin>>tmp>>a.B>>a.CD>>a.D;
        for (int j = 0; j < a.D; ++j) {
            cin>>tm;
            a.l.push_back(tm);
            cin>>tm;
            a.u.push_back(tm);
        }
        arrays[tmp] = a;
    }
    while(r--){
        cin>>tmp;
        Arr a = arrays[tmp];
        for (int i = 0; i < a.D; ++i) {
            cin>>tm;
            a.indexes.push_back(tm);
        }
        cout << tmp << "[" << a.indexes[0];
        for (int j = 1; j < a.indexes.size(); ++j) {
            cout << ", " << a.indexes[j];
        }
        cout << "] = " << physicalAddress(a) << endl;
    }
    return 0;
}