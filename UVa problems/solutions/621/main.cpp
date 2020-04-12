#include <iostream>
using namespace std;

int main() {
    int n;
    string tmp;
    cin>>n;
    while(n--){
        cin>>tmp;
        if(tmp.compare("1") == 0 || tmp.compare("4") == 0 || tmp.compare("78") == 0){cout<<"+"<<endl;}
        else if(tmp[tmp.length()-1] == '5' && tmp[tmp.length()-2] == '3'){cout<<"-"<<endl;}
        else if(tmp[0] == '9'  && tmp[tmp.length()-1] == '4'){cout<<"*"<<endl;}
        else if(tmp[0] == '1' && tmp[1] == '9' && tmp[2] == '0'){cout<<"?"<<endl;}
        else{cout<<"+"<<endl;}
    }
    return 0;
}