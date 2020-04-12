#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s1, s2;
    while (getline(cin, s1)){
        int pushes = 0, pops = 0;
        getline(cin, s2);
        stack<char> stack1, stack2;
        for (char i : s2)
            stack2.push(i);
        for (char i : s1){
            stack1.push(i);

        }

    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}