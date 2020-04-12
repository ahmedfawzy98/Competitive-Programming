#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int t,n,p,tmp,a;
    cin>>t;
    while(t--) {
        cin >> n >> p;
        map<int, bool> days;
        map<int,bool>::iterator it;
        for (int j = 1; j <= n; ++j) {
            days[j] = false;
        }
        for (int i = 0; i < p; ++i) {
            cin >> tmp;
//            a = 6;
            for (int j = tmp; j <= n; j += tmp) {
//                while(j > a){
//                    a += 7;
//                }
                if (j % 7 != 6 && j % 7 != 0) {
                    if (!days[j]) {
                        days[j] = true;
                    }
                }
            }
        }
        int sum = 0;
        for (it = days.begin(); it != days.end(); ++it) {
            if(it->second){
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}