#include <iostream>
using namespace std;

int main() {
    int c = 1;
    string s;
    cin>>s;
    while(s.compare("*") != 0){
        if(s.compare("Hajj") == 0){
            cout<<"Case "<<c++<<": "<<"Hajj-e-Akbar"<<endl;
        }
        else{
            cout<<"Case "<<c++<<": "<<"Hajj-e-Asghar"<<endl;
        }
        cin>>s;
    }
    return 0;
}