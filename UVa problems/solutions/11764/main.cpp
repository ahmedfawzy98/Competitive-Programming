#include <iostream>
using namespace std;

int main() {
    int t,n,h= 0,l = 0 ,tmp,x,ch=1;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>x;
        for (int i = 0; i < n-1; ++i) {
            cin>>tmp;
            if(x < tmp){h++;}
            else if(x > tmp){l++;}
            x = tmp;
        }
        cout<<"Case "<<ch++<<": "<<h<<" "<<l<<endl;
        h= 0,l = 0;
    }
    return 0;
}