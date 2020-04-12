#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
void read(vector<int> &v, int n){
    int tmp;
    for (int i = 0; i < n; ++i) {
        cin>>tmp;
        v.push_back(tmp);
    }
}
int main() {
    int t, n, counter = 1,tmp, tmp1, tmp2;
    vector<int> f1, s1, th1, f2, s2, th2;
    cin>>t;
    while(t--){
        cin>>n;
        read(f1,n);
        tmp = n;
        cin>>n;
        read(s1,n);
        tmp1 = n;
        cin>>n;
        read(th1,n);
        tmp2 = n;
        bool check;
        for (int i = 0; i < tmp; ++i) {
            check = true;
            for (int j = 0; j < tmp1; ++j) {
                if(f1[i] == s1[j]){
                    check = false;
                }
            }
            for (int k = 0; k < tmp2; ++k) {
                if(f1[i] == th1[k]){
                    check = false;
                }
            }
            if(check){
                f2.push_back(f1[i]);
            }
        }
        for (int i = 0; i < tmp1; ++i) {
            check = true;
            for (int j = 0; j < tmp; ++j) {
                if(s1[i] == f1[j]){
                    check = false;
                }
            }
            for (int k = 0; k < tmp2; ++k) {
                if(s1[i] == th1[k]){
                    check = false;
                }
            }
            if(check){
                s2.push_back(s1[i]);
            }
        }
        for (int i = 0; i < tmp2; ++i) {
            check = true;
            for (int j = 0; j < tmp1; ++j) {
                if(th1[i] == s1[j]){
                    check = false;
                }
            }
            for (int k = 0; k < tmp; ++k) {
                if(th1[i] == f1[k]){
                    check = false;
                }
            }
            if(check){
                th2.push_back(th1[i]);
            }
        }
        sort(f2.begin(),f2.end());
        sort(s2.begin(),s2.end());
        sort(th2.begin(),th2.end());
        cout << "Case #" << counter++ << ":\n";
        if(f2.size() == s2.size() && f2.size() == th2.size() && s2.size() == th2.size()){
            cout << 1 << " " << f2.size();
            for (int i = 0; i < f2.size(); ++i) {
                cout << " " << f2[i];
            }
            cout << endl;
            cout << 2 << " " << s2.size();
            for (int i = 0; i < s2.size(); ++i) {
                cout << " " << s2[i];
            }
            cout << endl;
            cout << 3 << " " << th2.size();
            for (int i = 0; i < th2.size(); ++i) {
                cout << " " << th2[i];
            }
            cout << endl;
        }
        else if(f2.size() == s2.size() && f2.size() > th2.size()){
            cout << 1 << " " << f2.size();
            for (int i = 0; i < f2.size(); ++i) {
                cout << " " << f2[i];
            }
            cout << endl;
            cout << 2 << " " << s2.size();
            for (int i = 0; i < s2.size(); ++i) {
                cout << " " << s2[i];
            }
            cout << endl;
        }
        else if(f2.size() == th2.size() && f2.size() > s2.size()){
            cout << 1 << " " << f2.size();
            for (int i = 0; i < f2.size(); ++i) {
                cout << " " << f2[i];
            }
            cout << endl;
            cout << 3 << " " << th2.size();
            for (int i = 0; i < th2.size(); ++i) {
                cout << " " << th2[i];
            }
            cout << endl;
        }
        else if(s2.size() == th2.size() && s2.size() > f2.size()){
            cout << 2 << " " << s2.size();
            for (int i = 0; i < s2.size(); ++i) {
                cout << " " << s2[i];
            }
            cout << endl;
            cout << 3 << " " << th2.size();
            for (int i = 0; i < th2.size(); ++i) {
                cout << " " << th2[i];
            }
            cout << endl;
        }
        else{
            if(f2.size() > s2.size() && f2.size() > th2.size()){
                cout << 1 << " " <<  f2.size();
                for (int i = 0; i <f2.size() ; ++i) {
                    cout << " " << f2[i];
                }
                cout << endl;
            }
            else if(s2.size() > f2.size() && s2.size() > th2.size()){
                cout << 2 << " " << s2.size();
                for (int i = 0; i <s2.size() ; ++i) {
                    cout << " " << s2[i];
                }
                cout << endl;
            }
            else{
                cout << 3 << " " << th2.size();
                for (int i = 0; i <th2.size() ; ++i) {
                    cout << " " << th2[i];
                }
                cout << endl;
            }
        }
        f1.clear();
        s1.clear();
        th1.clear();
        f2.clear();
        s2.clear();
        th2.clear();
    }
    return 0;
}