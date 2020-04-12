#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main() {
    map<char,int> strips;
    int tmp, counter = 0;
    for (char i = '1'; i <= '4'; ++i) {
        cin >> tmp;
        strips[i] = tmp;
    }
    string s;
    cin >> s;
    for (auto i : s){
        counter += strips[i];
    }
    cout << counter << endl;
    return 0;
}