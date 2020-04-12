#include <iostream>
using namespace std;

int main() {
    int t,snum,min,max,temp;
    cin>>t;
    while(t--){
        min = 99; max = 0;
        cin>>snum;
        for (int i = 0; i < snum; ++i) {
            cin>>temp;
            if(temp < min){
                min = temp;
            }
            if(temp > max){
                max= temp;
            }
        }
        cout<<(max - min)* 2<<endl;
    }
    return 0;
}