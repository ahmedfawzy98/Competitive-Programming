//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//    int n, t, k, d;
//    while (cin >> n >> t >> k >> d){
//        int time1 = 0, time2 = 0, bakes = 0;
//        while (bakes < n){
//            bakes += k;
//            time1 += t;
//        }
//        bakes = 0;
//        while (bakes < n){
//            if (time2 > d){
//                time2 += t;
//                bakes += 2 * k;
//                continue;
//            }
//            for (int i = 0; i < t; ++i) {
//                time2++;
//                if (time2 == d){
//                    bakes += 2 * k;
//                    time2 += t;
//                    break;
//                }
//            }
//            if (time2 != d) bakes += k;
//        }
//        cout << (time2 < time1 ? "YES" : "NO") << endl;
//    }
//    return 0;
//}
// BETTER APPROACH IS TO FORGET THE SECOND OVEN
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t, k, d;
    while (cin >> n >> t >> k >> d){
        int time = 0;
        while (time <= d){
            time += t;
            n -= k;
        }
        cout << (n > 0 ? "YES": "NO") << endl;
    }
    return 0;
}
