#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int k,m,c,r,tmp,sum = 0;
    vector<int> v1;
    bool check = true;
    while(cin>>k, k != 0){
        cin>>m;
        while(k--){
            cin>>tmp;
            v1.push_back(tmp);
        }
        while(m--){
            cin>>c>>r;
            while(c--){
                cin>>tmp;
                if(find(v1.begin(),v1.end(),tmp) != v1.end()){
                    sum++;
                }
            }
            if(sum < r){check = false;}
            sum = 0;
        }
        if(check){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
        v1.clear();
        check = true;
        sum = 0;
    }
    return 0;
}