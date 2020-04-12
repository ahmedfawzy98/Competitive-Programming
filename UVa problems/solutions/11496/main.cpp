#include <iostream>

using namespace std;

int main() {
    int n;
    while(cin>>n,n){
        int s[n], peaks = 0, tmp;
        for (int j = 0; j < n; ++j) {
            cin>>s[j];
        }
        for(int i = 0; i < n; ++i){
            tmp = i - 1;
            if(!i){tmp = n -1;}
            if((s[i] > s[(i+1)%n] && s[i] > s[tmp]) || (s[i] < s[(i+1)%n] && s[i] < s[tmp])){peaks++;}
        }
        cout << peaks << endl;
    }
    return 0;
}