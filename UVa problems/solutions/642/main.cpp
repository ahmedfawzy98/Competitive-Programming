#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string basicString(string tmp){
    sort(tmp.begin(),tmp.end());
    return tmp;
}
int main(){
    string s;
    vector<string> dic, scrambles;
    while(cin>>s, s[0] != 'X'){
        dic.push_back(s);
    }
    while(cin>>s, s[0] != 'X'){
        scrambles.push_back(s);
    }
    sort(dic.begin(),dic.end());
    for (int i = 0; i < scrambles.size(); ++i) {
        bool check = true;
        for (int j = 0; j < dic.size(); ++j) {
            if(basicString(scrambles[i]) == basicString(dic[j])){
                cout << dic[j] << endl;
                check = false;
            }
        }
        if(check){
            cout << "NOT A VALID WORD" << endl;
        }
        cout << "******" << endl;
    }
    return 0;
}