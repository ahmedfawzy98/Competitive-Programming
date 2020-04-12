#include <iostream>

using namespace std;

bool isPalindrome(string word){
    int start = 0, end = word.length() - 1;
    while(start < end){
        if(word[start] == '.' ||word[start] == ',' || word[start] == '!' || word[start] == '?' || word[start] == ' '){
            start++;
            continue;
        }
        if(word[end] == '.' ||word[end] == ',' || word[end] == '!' || word[end] == '?' || word[end] == ' '){
            end--;
            continue;
        }
        if(tolower(word[start]) != tolower(word[end])){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main() {
    string word;
    while(getline(cin,word), word.compare("DONE")){
        if(isPalindrome(word)){
            cout<< "You won't be eaten!" << endl;
        }else{
            cout<< "Uh oh.." << endl;
        }
    }
    return 0;
}