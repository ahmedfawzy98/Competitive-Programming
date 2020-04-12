#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    char c;
    bool t = true;
    while (scanf("%c",&c) != '\0'){
            if(c == '"'){
                if(t){
                    cout<<"``";
                }
                else{
                    cout<< "''";
                }
                t = !t;
            }else{
                cout<<c;
            }
    }
    return 0;
}