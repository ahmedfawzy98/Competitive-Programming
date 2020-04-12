#include <iostream>

using namespace std;

void tick(string &x){
    x[3] += 1;
    if(x[3] > '9'){
        x[3] = '0';
        x[2] += 1;
    }
    if(x[2] > '5'){
        x[2] = '0';
        x[1] += 1;
    }
    if(x[1] > '9'){
        x[1] = '0';
        x[0] += 1;
    }
    if(x[0] == '2' && x[1] == '4'){
        x[0] = x[1] = '0';
    }
}
bool isPalindrome(string x){
    int start = 0, end = 3;
    while(x[start] == '0')
        start++;
    while(start < end){
        if(x[start++] != x[end--]){
            return false;
        }
    }
    return true;
}
int main() {
    int t;
    string time;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,time);
        time.erase(2,1);
        tick(time);
        while(!isPalindrome(time))
            tick(time);
        cout << time[0] << time[1] << ":" << time[2] << time[3] << endl;

    }
    return 0;
}