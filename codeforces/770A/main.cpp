//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//    int n, k;
//    while (cin >> n >> k){
//        string s;
//        char alphabet[k], start = 'a';
//        for (int j = 0; j < k; ++j) {
//            s += start;
//            alphabet[j] = start++;
//        }
//        int x = s.length() - 1;
//        while (s.length() < n){
//            char y = alphabet[rand() % k];
//            if (s[x] != y){
//                s += y;
//                x++;
//            }
//        }
//        cout << s << endl;
//    }
//    return 0;
//}
// BETTER IMPLEMENTATION FOR THE SAME IDEA LIKE BELOW
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    while (cin >> n >> k){
        for (int i = 0; i < n; ++i) {
            cout << (char)('a' + i % k);
        }
    }
    return 0;
}