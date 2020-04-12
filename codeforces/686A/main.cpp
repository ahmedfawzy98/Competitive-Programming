#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    long long int x, tmp;
    while (cin >> n >> x){
        char a;
        int d = 0;
        while (n--){
            cin >> a >> tmp;
            if (a == '+'){x += tmp;}
            if (a == '-'){
                if (x >= tmp){x-= tmp;}
                else{d++;}
            }
        }
        cout << x << ' ' << d << endl;
    }
    return 0;
}