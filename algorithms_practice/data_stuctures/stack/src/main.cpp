#include <iostream>
#include "../headers/stack.h"

using namespace std;

int main(int, char**) {
    Stack stack = Stack();
    stack.push(5);
    stack.push(8);
    stack.push(1);
    stack.push(-1);
    stack.printStack();
    cout << "Peek is = " << stack.peek() << endl;
    stack.pop();
    stack.pop();
    stack.printStack();
    cout << "Peek is = " << stack.peek() << endl;
    cout << (stack.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;
    stack.pop();
    stack.pop();
    cout << (stack.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;
    stack.pop();
    stack.printStack();
    stack.push(9);
    stack.push(2);
    cout << "Peek is = " << stack.peek() << endl;
    return 0;
}
