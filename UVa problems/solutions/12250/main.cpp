#include <iostream>
using namespace std;

int main() {
    string s;
    int c = 1;
    cin>>s;
    while(s.compare("#") != 0){
        if(s.compare("HELLO")==0){cout<<"Case "<<c<<": "<<"ENGLISH"<<endl;}
        else if(s.compare("HOLA")==0){cout<<"Case "<<c<<": "<<"SPANISH"<<endl;}
        else if(s.compare("HALLO")==0){cout<<"Case "<<c<<": "<<"GERMAN"<<endl;}
        else if(s.compare("BONJOUR")==0){cout<<"Case "<<c<<": "<<"FRENCH"<<endl;}
        else if(s.compare("CIAO")==0){cout<<"Case "<<c<<": "<<"ITALIAN"<<endl;}
        else if(s.compare("ZDRAVSTVUJTE")==0){cout<<"Case "<<c<<": "<<"RUSSIAN"<<endl;}
        else{cout<<"Case "<<c<<": "<<"UNKNOWN"<<endl;}
        c++;
        cin>>s;
    }
    return 0;
}