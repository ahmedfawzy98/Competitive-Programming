#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t,s[3],c = 1;
    cin>>t;
    while(t--){
        cin>>s[0]>>s[1]>>s[2];
        sort(s,s+3);
        cout<< "Case "<<c++<<": "<<s[1]<<endl;
    }
    return 0;
}