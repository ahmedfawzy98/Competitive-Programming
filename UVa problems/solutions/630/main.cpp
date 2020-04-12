#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string basicString(string s){
    sort(s.begin(),s.end());
    return s;
}
int main() {
    int t,n;
    string tmp;
    cin>> t;
    cin.ignore();
    cin.ignore();
    while(t--){
        cin>>n;
        vector<string> words;
        while(n--){
            cin>>tmp;
            words.push_back(tmp);
        }
        while(cin>>tmp, tmp != "END"){
            vector<string> anagrams;
            for (int i = 0; i < words.size(); ++i) {
                if(basicString(tmp) == basicString(words[i])){
                    anagrams.push_back(words[i]);
                }
            }
            cout << "Anagrams for: " << tmp << endl;
            if(!anagrams.size()){
                cout << "No anagrams for: " << tmp << endl;
            }else{
                for (int j = 0; j < anagrams.size(); ++j) {
                    cout << "  " << j + 1 << ") " << anagrams[j] << endl;
                }
            }
        }
        if(t){
            cout << endl;
        }
    }
    return 0;
}