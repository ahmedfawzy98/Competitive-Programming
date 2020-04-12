#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string word, tmp1, tmp2;
    vector<string> dic, result;
    while(cin>>word, word != "#"){
        dic.push_back(word);
    }
    for (int i = 0; i < dic.size(); ++i) {
        if(dic[i] == "0"){continue;}
        string sub = dic[i];
        tmp1 = sub;
        for (int k = 0; k < tmp1.length();tmp1[k] = tolower(tmp1[k]), ++k);
        sort(tmp1.begin(),tmp1.end());
        bool check = false;
        for (int j = 0; j < dic.size(); ++j) {
            if(dic[j] == sub || dic[j] == "0"){ continue;}
            tmp2 = dic[j];
            for (int k = 0; k < tmp2.length();tmp2[k] = tolower(tmp2[k]), ++k);
            sort(tmp2.begin(),tmp2.end());
            if(tmp1 == tmp2){
                check = true;
                dic[j] = "0";
            }
        }
        if(check){
            dic[i] = "0";
        }else{
            result.push_back(sub);
        }
    }
    sort(result.begin(),result.end());
    for (int k = 0; k < result.size(); ++k) {
        cout << result[k] << endl;
    }
    return 0;
}