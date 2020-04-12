#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isAnagram(string w1, string w2){
    /// erase - remove idiom c++
    w1.erase(remove(w1.begin(),w1.end(),' '), w1.end());
    w2.erase(remove(w2.begin(),w2.end(),' '),w2.end());
    sort(w1.begin(),w1.end());
    sort(w2.begin(),w2.end());
    if(w1 == w2){
        return true;
    }else{
        return false;
    }
}
int main() {
    int t;
    string word;
    cin>> t;
    cin.ignore();
    cin.ignore();
    while(t--){
        vector<string> ws;
        while(getline(cin,word), word != ""){
            ws.push_back(word);
        }
        sort(ws.begin(),ws.end());
        for (int i = 0; i < ws.size(); ++i) {
            for (int j = i+1; j < ws.size(); ++j) {
                if(isAnagram(ws[i],ws[j])){
                    cout << ws[i] << " = " << ws[j] << endl;
                }
            }
        }
        if(t){
            cout << endl;
        }
    }
    return 0;
}