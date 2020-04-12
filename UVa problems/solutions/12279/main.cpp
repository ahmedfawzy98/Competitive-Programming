#include <iostream>
using namespace std;

int main() {
    int n,a=0,b=0,tmp,c=1;
    cin>>n;
    while(n){
        while(n--){
            cin>>tmp;
            if(tmp){a++;}
            else{b++;}
        }
        cout<<"Case "<<c++<<": "<<a-b<<endl;
        a=0;b=0;
        cin>>n;
    }
    return 0;
}