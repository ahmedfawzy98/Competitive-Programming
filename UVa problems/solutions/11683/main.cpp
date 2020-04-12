#include <iostream>

using namespace std;

int main() {
    int a,c,tmp1,tmp2,sum = 0;
    while(cin>>a, a != 0){
        cin>>c>>tmp1;
        if(tmp1 < a){sum += a-tmp1;}
        for(int i = 0; i < c-1; ++i){
            cin>>tmp2;
            if(tmp2 < tmp1){
                sum += tmp1 - tmp2;
            }
            tmp1 = tmp2;
        }
        cout<< sum << endl;
        sum = 0;
    }
    return 0;
}