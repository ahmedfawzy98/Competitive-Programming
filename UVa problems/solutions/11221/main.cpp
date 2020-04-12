#include <iostream>
#include <cstdio>
#include <math.h>
#include <string>
#include <cstring>

using namespace std;

bool isPalindrome(string word){
    int start = 0, end = word.length() - 1;
    while(start < end){
        if(word[start] < 97 || word[start] > 122){
            start++;
            continue;
        }
        if(word[end] < 97 || word[end] > 122){
                end--;
                continue;
        }
        if(word[start] != word[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main() {
    int t, counter = 1;
    string word;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,word);
        int length = 0;
        for (int i = 0; i < word.length(); ++i) {
            if(word[i] >= 97 && word[i] <= 122){
                length++;
            }
        }
        if(isPalindrome(word) && sqrt(length) == floor(sqrt(length))){
            cout << "Case #" << counter++ << ":\n" << floor(sqrt(length)) << endl;
        }else{
            cout << "Case #" << counter++ << ":\n" << "No magic :(" << endl;
        }
    }
    return 0;
}