#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,m,c,tmp,sum=0,counter = 1,max=0;
    vector<int> v1,v2;
    bool safe = true;
    while(cin>>n>>m>>c){
        if(!n && !m && !c){break;}
        v2.assign(n,0);
        for (int i = 0; i < n; ++i) {
            cin>>tmp;
            v1.push_back(tmp);
        }
        for (int k = 0; k < m; ++k) {
            cin>>tmp;
            if(v2[tmp-1] == 0){
                v2[tmp-1] = 1;
                sum += v1[tmp-1];
            }else{
                v2[tmp-1] = 0;
                sum -= v1[tmp-1];
            }
            if(max<sum){max = sum;}
            if(sum > c){safe = false;}
        }
        if(!safe){
            cout<<"Sequence "<<counter++<<endl<<"Fuse was blown.\n"<<endl;
        }else{
            cout<<"Sequence "<<counter++<<endl<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<<max<<" amperes.\n"<<endl;
        }
        sum = max = 0;
        v1.clear();
        v2.clear();
        safe = true;
    }
    return 0;
}
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,m,c,tmp,sum=0,counter = 1;
    vector<int> v1,v2,v3,v4;
    bool safe = true;
    while(cin>>n>>m>>c){
        if(!n && !m && !c){break;}
        v3.assign(n,0);
        for (int i = 0; i < n; ++i) {
            cin>>tmp;
            v1.push_back(tmp);
        }
        for (int j = 0; j < m; ++j) {
            cin>>tmp;
            v2.push_back(tmp);
        }
        for (int k = 0; k < m; ++k) {
            if(v3[v2[k]-1] == 0){
                v3[v2[k]-1] = 1;
                sum += v1[v2[k]-1];
            }else{
                v3[v2[k]-1] = 0;
                sum -= v1[v2[k]-1];
            }
            if(sum > c){
                safe = false;break;
            }
            v4.push_back(sum);
        }
        if(!safe){
            cout<<"Sequence "<<counter++<<endl<<"Fuse was blown.\n"<<endl;
        }else{
            sort(v4.begin(),v4.end());
            cout<<"Sequence "<<counter++<<endl<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<<v4.back()<<" amperes.\n"<<endl;
        }
        sum = 0;
        v1.clear();
        v2.clear();
        v3.clear();
        v4.clear();
        safe = true;
    }
    return 0;
}*/
