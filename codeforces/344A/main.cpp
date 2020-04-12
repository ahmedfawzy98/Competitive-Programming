#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n){
        int counter = 1;
        string s, tmp;
        while (n--){
            cin >> tmp;
            if (s.empty()){s = tmp;}
            else{
                if (tmp[0] == s[s.length() - 1]){counter++;}
                s += tmp;
            }
        }
        cout << counter << endl;
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n){
        int counter = 0;
        int tmp, last = 0;
        while (n--){
            cin >> tmp;
            if (tmp != last){
                counter++;
                last = tmp;
            }
        }
        cout << counter << endl;
    }
    return 0;
}
*/