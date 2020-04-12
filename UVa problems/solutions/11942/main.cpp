#include <iostream>
using namespace std;
int main() {
    int n,x,tmp,c1=1,c2 = 10;
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    while(n--){
        cin>>x;
        for (int i = 0; i < 9; ++i) {
            cin>>tmp;
            if(x < tmp){c1++;}
            if(x > tmp){c2--;}
            x = tmp;
        }
        if(c1 == 10 || c2 == 1){
            cout<<"Ordered"<<endl;
        }else{
            cout<<"Unordered"<<endl;
        }
        c1 = 1;
        c2 = 10;
    }
    return 0;
}