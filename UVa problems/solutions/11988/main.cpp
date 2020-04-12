#include <iostream>
#include <list>

using namespace std;

int main() {
    string s;
    list<char> list;
    while (getline(cin, s)){
        auto it = list.begin();
        for (char i : s) {
            if (i == '['){
                it = list.begin();
            }
            else if (i == ']'){
                it = list.end();
            }else{
                list.insert(it, i);
            }
        }
        for (char i : list){
            cout << i;
        }
        list.clear();
        cout << endl;
    }
    return 0;
}
