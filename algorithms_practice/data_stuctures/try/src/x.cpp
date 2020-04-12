#include <iostream>
#include "../headers/x.h"

using namespace std;

Node::Node(int d) : data(d){}

void Node::print_data(){
    cout << "Data of node = " << data << endl;
}