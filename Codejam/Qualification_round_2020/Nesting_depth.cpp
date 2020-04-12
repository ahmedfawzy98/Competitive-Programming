#include <iostream>
#include <stack>

using namespace std;

int main(){
    int T, counter = 1;
    string s, result;
    stack<char> stack;
    cin >> T;
    while(T--){
        cin >> s;
        for(char c : s){
            int value = c - '0', size = stack.size();
            if(value > size){
                while(value > size){
                    result += '(';
                    stack.push('(');
                    size = stack.size();
                }
                result += c;
            }
            else{
                while(value < size){
                    result += ')';
                    stack.pop();
                    size = stack.size();
                }
                result += c;
            }
        }
        while(!stack.empty()){result += ')'; stack.pop();}
        cout << "Case #" << counter++ << ": " << result << endl;
        result.clear();
    }
}
