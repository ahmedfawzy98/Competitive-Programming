#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n){
        int police = 0, crimes = 0, tmp;
        while (n--){
            cin >> tmp;
            if (tmp == -1 and police == 0){crimes++;}
            else if (tmp == -1 and police){police--;}
            else{police += tmp;}
        }
        cout << crimes << endl;
    }
    return 0;
}