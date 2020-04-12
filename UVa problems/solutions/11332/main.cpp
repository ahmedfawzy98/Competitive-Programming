#include <iostream>
using namespace std;
int main() {
    int n,tmp=0;
    cin>>n;
    while(n){
        while(n / 10 != 0){
            while(n){
                tmp = tmp + n%10;
                n /=10;
            }
            n = tmp;
            tmp = 0;
        }
        cout<<n<<endl;
        cin>>n;
    }
    return 0;
}