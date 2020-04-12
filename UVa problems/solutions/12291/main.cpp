#include <iostream>
using namespace std;

int main() {
    int n,r,tmp;
    cin>>n>>r;
    for (int i = 0; i < n; ++i) {
        cin>>tmp;
        if(tmp < r){
            cout << "Bad boi" << endl;
        }
        else{
            cout << "Good boi" << endl;
        }
    }
    return 0;
}