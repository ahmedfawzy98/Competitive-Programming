#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(char a, char b){
    if(tolower(a) == tolower(b)){
        return a < b;
    }
    return tolower(a) < tolower(b);
}
int main() {
    int t;
    string word;
    cin>>t;
    while(t--){
        cin>>word;
        sort(word.begin(),word.end(),compare);
        cout << word << endl;
        while(next_permutation(word.begin(),word.end(),compare)){
            cout << word << endl;
        }
    }
    return 0;
}
/*#include <iostream>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;

bool comparator(char a, char b){
    if(tolower(a) == tolower(b)){
        return a<b;
    }
    return tolower(a) < tolower(b);
}
int main() {
    char word[1000];
    int n;

    cin >> n;
    while(n--){
        cin.ignore();
        cin >> word;

        sort(word,word+strlen(word),comparator);
        cout << word << endl;
        while(next_permutation(word,word+strlen(word),comparator)){
            cout << word << endl;
        }

    }

    return 0;
}*/
