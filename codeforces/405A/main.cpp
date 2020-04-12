//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    while (cin >> n){
//        int cubes[n];
//        for (int i = 0; i < n; ++i) {
//            cin >> cubes[i];
//        }
//        for (int j = 0; j < n - 1; ++j) {
//            for (int i = 0; i < n - 1; ++i) {
//                int diff = cubes[i] - cubes[i + 1];
//                if (diff > 0){
//                    cubes[i] -= diff;
//                    cubes[i + 1] += diff;
//                }
//            }
//        }
//        for (int k = 0; k < n; ++k) {
//            if (k == n -1){
//                cout << cubes[k];
//            }else{
//                cout << cubes[k] << ' ';
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}
// THERE IS A BETTER APPROACH FOR THIS PROBLEM
// ALREADY I MADE SORTING IN PAST SOLUTION
#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n, *cubes;
    cin >> n;
    cubes = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> cubes[i];
    }
    sort(cubes, cubes + n);
    for (int j = 0; j < n; ++j) {
        cout << cubes[j] << ' ';
    }
    return 0;
}