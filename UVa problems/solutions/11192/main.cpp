/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int g;
    string s;
    while(cin>>g,g){
        cin>>s;
        int l = s.length() / g;
        for (int i = 0; i < s.length(); i += l) {
            int x = i + l - 1;
            for (int j = i; j <= i + (l-1)/2; ++j) {
                char tmp = s[j];
                s[j] = s[x];
                s[x--] = tmp;
            }
        }
        cout << s << endl;
    }
    return 0;
}*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int g;
    string s;
    while(cin>>g,g){
        cin >> s;
        int l = s.length() / g;
        for (int i = 0; i < s.length(); i += l) {
            reverse(s.begin()+i,s.begin()+i+l);
        }
        cout << s << endl;
    }
    return 0;
}