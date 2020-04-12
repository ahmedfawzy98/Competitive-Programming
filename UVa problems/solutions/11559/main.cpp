#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,b,h,w,p,r;
    while(cin>>n>>b>>h>>w){
        int cost = b+1;
        for (int i = 0; i < h; ++i) {
            cin>>p;
            for (int j = 0; j < w; ++j) {
                cin>>r;
                if(r>=n){
                    cost = min(cost,n*p);
                }
            }
        }
        if(cost > b){
            cout<<"stay home"<<endl;
        }else{
            cout<<cost<<endl;
        }
    }
    return 0;
}