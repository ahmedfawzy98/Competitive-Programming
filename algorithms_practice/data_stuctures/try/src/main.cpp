#include <iostream>
#include "../headers/x.h"
#include <algorithm>
using namespace std;

string concatenate(const string& a, const string& b){
    return a + b;
}

string defangIPaddr(string address){
    string x = address;
    int j = 0;
        for(int i = 0; i < address.length(); i++){
            if(address[i] == '.'){
                x.replace(j, 1, "[.]");
                j += 3;
            }else{j++;}
        }
        return x;
    
}
int main(int, char**) {
    // Node a = Node(5);
    // a.print_data();
    // string a = "ahmed", b = "fawzy";
    // concatenate(a, b);
    // cout << a << endl;
    // cout << b << endl;

    // string x;
    // cin >> x;
    // cout << defangIPaddr(x) << endl;
    string x = "AHMED";
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    cout << x << endl;
    return 0;
}