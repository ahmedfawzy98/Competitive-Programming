#include <iostream>
using namespace std;

int main() {
    int t , n , tmp;
    cin>>t;
    while(t--){
        cin>>n;
        tmp = (((n*567 / 9 + 7492) * 235 / 47) -498 ) / 10;
         cout<< abs(tmp%10)<<endl;
    }
    return 0;
}