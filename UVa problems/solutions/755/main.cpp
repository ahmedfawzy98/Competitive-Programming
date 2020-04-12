#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string standardForm(string a){
    a.erase(remove(a.begin(),a.end(),'-'),a.end());
    for (int i = 0; i < a.size(); ++i) {
        if(a[i] == 'A' || a[i] == 'B' || a[i] == 'C'){a[i] = '2';}
        if(a[i] == 'D' || a[i] == 'E' || a[i] == 'F'){a[i] = '3';}
        if(a[i] == 'G' || a[i] == 'H' || a[i] == 'I'){a[i] = '4';}
        if(a[i] == 'J' || a[i] == 'K' || a[i] == 'L'){a[i] = '5';}
        if(a[i] == 'M' || a[i] == 'N' || a[i] == 'O'){a[i] = '6';}
        if(a[i] == 'P' || a[i] == 'R' || a[i] == 'S'){a[i] = '7';}
        if(a[i] == 'T' || a[i] == 'U' || a[i] == 'V'){a[i] = '8';}
        if(a[i] == 'W' || a[i] == 'X' || a[i] == 'Y'){a[i] = '9';}
    }
    a.insert(3,1,'-');
    return a;
}
int main() {
    int t,n;
    string tmp;
    cin>>t;
    while(t--){
        cin.ignore();
        cin.ignore();
        cin>>n;
        map<string,int> telephones;
        map<string,int>::iterator it;
        while(n--){
            cin>>tmp;
            tmp = standardForm(tmp);
            it = telephones.find(tmp);
            if(it == telephones.end()){
                telephones.insert(pair<string,int>(tmp,1));
            }
            else{
                it->second++;
            }
        }
        bool check = false;
        for (it = telephones.begin(); it!= telephones.end() ; ++it) {
            if(it->second > 1){
                cout << it->first << " " << it->second << endl;
                check = true;
            }
        }
        if(!check){
            cout << "No duplicates." << endl;
        }
        if(t){
            cout << endl;
        }
    }
    return 0;
}