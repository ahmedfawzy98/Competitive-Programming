#include <iostream>
#include <fstream>
#include <set>

using namespace std;

bool isPalindrome(string word){
    int start = 0, end = word.length() - 1;
    while(start < end){
        if(word[start] != word[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main() {
//    ifstream inFile("a");
//    ofstream outputFile;
//    if(inFile.is_open()){
//        outputFile.open("output-file.txt");
        int t,l,n,k;
        cin>>t;
        while(t--){
            cin>>l>>n>>k;
            char al[l];
            int start = 97;
            for (int i = 0; i < l; ++i) {
                al[i] =(char) start;
                start++;
            }

            set<string> palindromes;
            int length = 1, i = 0;
            while(length <= n){
                for (int m = 0; m < length; ++m) {

                }
                for (int j = 0; j <= l; ++j) {
                    string sub = "";
                    sub += al[j];
                    if(isPalindrome(sub)){palindromes.insert(sub);}
                }
                length++;
            }


        }
//    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}