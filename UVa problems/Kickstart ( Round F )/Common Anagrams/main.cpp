#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;
bool isAnagram(string s1,string s2){
    for (int i = 0; i < s2.length(); ++i) {
        string sub = "";
        for (int j = i; j < s2.length(); ++j) {
            sub += s2[j];
            sort(sub.begin(),sub.end());
            sort(s1.begin(),s1.end());
            if(s1.compare(sub) == 0){
                return true;
            }
        }
    }
    return false;
}
int main() {
    ifstream inFile("A-large.in");
    ofstream outFile;
    if(inFile.is_open()){
        outFile.open("output-file.txt");
        int t,l,counter = 1;
        string s1,s2;
        inFile>>t;
        while(t--){
            inFile>>l>>s1>>s2;
            int sum = 0;
            for (int i = 0; i < s1.length(); ++i) {
                string subString = "";
                for (int j = i; j < s1.length(); ++j) {
                    subString += s1[j];
                    if(isAnagram(subString,s2)){
                        sum++;
                    }
                }
            }
            outFile << "Case #" << counter++ << ": " << sum << endl;
        }
        inFile.close();
        outFile.close();
    }
    return 0;
}