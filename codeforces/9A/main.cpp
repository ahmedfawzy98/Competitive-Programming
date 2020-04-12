//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int a, b;
//    while (cin >> a >> b){
//        int x = 6 - max(a, b) + 1, d = 6;
//        if (x == 6){
//            cout << 1 << '/' << 1 << endl;
//        }else if(x == 0){
//            cout << 0 << '/' << 1 << endl;
//        }else{
//            while (x % 3 == 0 and d % 3 == 0){
//                x /= 3;
//                d /= 3;
//            }
//            while (x % 2 == 0 and d % 2 == 0){
//                x /= 2;
//                d /= 2;
//            }
//            cout << x << '/' << d << endl;
//        }
//    }
//    return 0;
//}
// BETTER SOLUTION IS USING GCD (GREATEST COMMON DIVISOR)
#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int a, b;
    while (cin >> a >> b){
        int x = 6 - max(a, b) + 1, d = 6;
        int y = __gcd(x, d);
        cout << x / y << '/' << d / y << endl;
    }
}