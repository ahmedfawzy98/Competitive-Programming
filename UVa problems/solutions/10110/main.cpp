//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//    unsigned int n;
//    while (cin >> n, n){
//        int status = 0;
//        for (unsigned int i = 1; i <= n; ++i) {
//            if (n % i == 0){
//                ++status %= 2;
//            }
//        }
//        cout << (status ? "yes": "no") << endl;
//    }
//    return 0;
//}
// MORE IMPROVED SOLUTION IS
#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned int n;
    while (cin >> n, n){
        unsigned int  sq = (int) sqrt(n);
        cout << (sq * sq == n? "yes": "no") << endl;
    }
}