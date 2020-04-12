//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//    int n, s, tmp1, tmp2;
//    while (cin >> n){
//        int wires[n];
//        for (int i = 0; i < n; ++i) {
//            cin >> wires[i];
//        }
//        cin >> s;
//        for (int j = 0; j < s; ++j) {
//            cin >> tmp1 >> tmp2;
//            int x = wires[--tmp1];
//            wires[tmp1] = 0;
//            if (!tmp1){
//                wires[tmp1 + 1] += x - tmp2;
//            }else if(tmp1 == n - 1){
//                wires[tmp1 - 1] += tmp2 - 1;
//            }else{
//                wires[tmp1 - 1] += tmp2 - 1;
//                wires[tmp1 + 1] += x - tmp2;
//            }
//        }
//        for (auto i : wires){
//            cout << i << endl;
//        }
//    }
//    return 0;
//}
// BETTER APPROACH IS USING EXTRA SPACE TO DON'T PANIC WITH THIS CONDITIONS
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, s, tmp1, tmp2;
    while (cin >> n){
        int wires[n + 2];
        for (int i = 1; i <= n; ++i) {
            cin >> wires[i];
        }
        cin >> s;
        for (int j = 0; j < s; ++j) {
            cin >> tmp1 >> tmp2;
            wires[tmp1 - 1] += tmp2 - 1;
            wires[tmp1 + 1] += wires[tmp1] - tmp2;
            wires[tmp1] = 0;
        }
        for (int k = 1; k <= n; ++k) {
            cout << wires[k] << endl;
        }
    }
    return 0;
}