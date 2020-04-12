#include <iostream>
#include "../headers/queue.h"

using namespace std;

int main(int, char**) {
    Queue queue = Queue();
    queue.add(10);
    queue.add(3);
    queue.add(1);
    queue.add(8);
    queue.add(6);
    queue.printQueue();
    cout << "Peek of queue = " << queue.peek() << endl;
    queue.remove();
    queue.remove();
    queue.remove();
    queue.printQueue();
    cout << "Peek of queue = " << queue.peek() << endl;
    queue.remove();
    queue.remove();
    queue.printQueue();
    queue.remove();
    queue.add(7);
    queue.add(8);
    cout << "Peek of queue = " << queue.peek() << endl;
    return 0;
}
