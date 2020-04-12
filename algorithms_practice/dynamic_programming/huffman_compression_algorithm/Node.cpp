
#include "Node.h"

Node::Node(char data, unsigned freq): data(data), frequency(freq){
    left = right = nullptr;
}
