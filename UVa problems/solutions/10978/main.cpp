#include <iostream>

using namespace std;

int main() {
    int n;
    string s1,s2;
    while(cin>>n,n){
        string arr[n];
        int tmp = -1;
        for (int i = 0; i < n; ++i) {
            cin>>s1>>s2;
            for (int j = 0; j < s2.length(); ++j) {
                tmp = (tmp + 1) % n;
                while(arr[tmp] != ""){
                    tmp = (tmp + 1) % n;
                }
            }
            arr[tmp] = s1;
        }
        for (int j = 0; j < n; ++j) {
            if(j)
                cout << " ";
            cout << arr[j];
        }
        cout << "\n";
    }
    return 0;
}