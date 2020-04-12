#include <iostream>

using namespace std;

int main() {
    int i,j,n,counter = 1;
    string x;
    bool check = true;
    while(cin>>x>>n){
        cout<<"Case "<<counter++<<":"<<endl;
        while(n--){
            cin>>i>>j;
            if(i > j){
                int tmp = j;
                j = i;
                i = tmp;
            }
            for (int k = i; k <j ; ++k) {
                if(x[k] != x[k+1]){check = false;}
            }
            if(check){
                cout<<"Yes"<<endl;
            } else{
                cout<<"No"<<endl;
            }
            check = true;
        }
    }
    return 0;
}