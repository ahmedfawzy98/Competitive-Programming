#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string x){
    int start = 0, end = x.length() - 1;
    while(start < end){
        if(x[start] != x[end])
            return false;
        start++;
        end--;
    }
    return true;
}
int main() {
    int n;
    string tmp1,tmp2;
    cin>>n;
    while(n--){
        cin>>tmp1;
        int i = 0;
        unsigned int old, New,r;
        tmp2 = tmp1;
        while(1){
            i++;
            reverse(tmp1.begin(),tmp1.end());
            old = stoul(tmp2); New = stoul(tmp1);
            r = old + New;
            if(isPalindrome(to_string(r)))
                break;
            tmp2 = tmp1 = to_string(r);
        }
        cout<< i << " " << r << endl;
    }
    return 0;
}