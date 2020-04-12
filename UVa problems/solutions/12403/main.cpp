#include <iostream>
using namespace std;

int main() {
    int t,m,total=0;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        if(s.compare("donate") == 0){
            cin>>m;
            total = total + m;
        }
        else{
            cout<<total<<endl;
        }
    }
    return 0;
}