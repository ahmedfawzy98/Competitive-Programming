#include <iostream>
#include <sstream>
#include <map>
#include <vector>

using namespace std;
int main() {
    int t,tmp;
    string str;
    cin>>t;
    cin.ignore();
    cin.ignore();
    while(t--){
        map<int,string> array;
        vector<int> indexes;
        getline(cin,str);
        stringstream ss(str);
        while(ss>>tmp){
            indexes.push_back(tmp);
        }
        for (int i = 0; i < indexes.size(); ++i) {
            cin>>str;
            array[indexes[i] - 1] = str;
        }
        for (int j = 0; j < array.size(); ++j) {
            cout << array[j] << endl;
        }
        if(t)
            cout << endl;
        cin.ignore();
        cin.ignore();
    }
    return 0;
}