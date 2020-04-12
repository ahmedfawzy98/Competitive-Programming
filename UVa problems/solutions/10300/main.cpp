#include <iostream>
using namespace std;

int main() {
    int n,f,s,a,h,total = 0;
    cin>>n;
    while(n--){
        cin>>f;
        while(f--){
            cin>>s>>a>>h;
            total = total + (s*h);
        }
        cout<<total<<endl;
        total = 0;
    }
    return 0;
}