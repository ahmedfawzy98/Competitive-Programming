#include <iostream>
#include <map>
#include <vector>

using namespace std;
char getCHar(char a){
    if(a == 'B' || a == 'F' || a == 'P' || a == 'V')
        return '1';
    else if(a == 'C' || a == 'G' || a == 'J' || a == 'K' || a == 'Q' || a == 'S' || a == 'X' || a == 'Z')
        return '2';
    else if(a == 'D' || a == 'T')
        return '3';
    else if(a == 'L')
        return '4';
    else if(a == 'M' || a == 'N')
        return '5';
    else if(a == 'R')
        return '6';
    else
        return '0';
}
int main() {
    string word;
    while(cin>>word){
        string answer = "";
        char c;
        for (int i = 0; i < word.length(); ++i) {
            c = getCHar(word[i]);
            if(c == '0'){ continue;}
            while(c == getCHar(word[i+1])){
                i++;
                c = getCHar(word[i]);
            }
            answer += c;
        }
        cout << answer << endl;
    }
    return 0;
}