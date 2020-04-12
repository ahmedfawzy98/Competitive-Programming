#include <iostream>
using namespace std;
int main() {
    int t,n,tmp,mcost,jcost, c = 1;
    cin>>t;
    while(t--){
        cin>>n;
        mcost = 0;
        jcost = 0;
        for (int i = 0; i < n; ++i) {
            cin>>tmp;
            mcost += (tmp/30) * 10 +10;
            jcost += (tmp/60) * 15 +15;
        }
        if(mcost < jcost ){
            cout<<"Case "<<c++<<": "<<"Mile "<<mcost<<endl;
        }else if (mcost > jcost){
            cout<<"Case "<<c++<<": "<<"Juice "<<jcost<<endl;
        }else{
            cout<<"Case "<<c++<<": "<<"Mile "<<"Juice "<<mcost<<endl;
        }
    }
    return 0;
}