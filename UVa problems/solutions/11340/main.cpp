#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int t,k,m,tmp;
    char c;
    string s;
    cin>>t;
    while(t--){
        cin>>k;
        map<char,int> table;
        double sum = 0;
        for (int i = 0; i < k; ++i) {
            cin>>c>>tmp;
            table[c] = tmp;
        }
        cin>>m;
        cin.ignore();
        for (int j = 0; j < m; ++j) {
            getline(cin,s);
            for (int i = 0; i < s.length(); ++i) {
                if(table.find(s[i]) != table.end()){
                    sum += table[s[i]] / 100.0;
                }
                else{
                    sum += 0;
                }
            }
        }
        printf("%0.2f$\n",sum);
    }
    return 0;
}