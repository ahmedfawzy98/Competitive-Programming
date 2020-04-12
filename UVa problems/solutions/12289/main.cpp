#include <iostream>
#include <string>
using namespace std;

int main() {
    int t,counter=0;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        if(s.length()> 3){cout<< "3"<<endl;}
        else{
            if(s[0] == 'o'){counter++;}
            if(s[1] == 'n'){counter++;}
            if(s[2] == 'e'){counter++;}

            if(counter >=2){cout<<"1"<<endl;}
            else{cout<<"2"<<endl;}
            counter = 0;
        }
    }
    return 0;
}