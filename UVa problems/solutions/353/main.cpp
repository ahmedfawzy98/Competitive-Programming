#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool isPalindrome(string word){
    int start = 0, end = word.length()-1;
    while(start < end){
        if(word[start] != word[end])
            return false;
        start++;
        end--;
    }
    return true;
}
int main() {
    string x;
    while(getline(cin,x)){
        vector<string> palindromes;
        int sum = 0;
        for (int j = 0; j < x.length(); ++j) {
            string subString = "";
            for (int i = j; i < x.length(); ++i) {
                subString += x[i];
                if(isPalindrome(subString) && find(palindromes.begin(),palindromes.end(),subString) == palindromes.end()){
                    palindromes.push_back(subString);
                    sum++;
                }
            }
        }
        cout << "The string '" << x << "' contains " << sum << " palindromes." << endl;
    }
    return 0;
}