#include <iostream>
#include "../headers/tree.h"

using namespace std;

int main(int, char**) {
    Tree tree = Tree();
    tree.insert(7);
    tree.insert(10);
    tree.insert(5);
    tree.insert(3);
    tree.insert(6);
    tree.insert(4);
    tree.insert(11);
    tree.insert(8);
    tree.insert(9);
    tree.search(5);
    tree.search(2);
    tree.search(9);
    tree.search(4);
    tree.inOrderTraversal(tree.root); cout << endl;
    tree.preOrderTraversal(tree.root); cout << endl;
    tree.postOrderTraversal(tree.root); cout << endl;
    tree.remove(tree.root, 7);
    tree.remove(tree.root, 5);
    tree.remove(tree.root, 6);
    tree.remove(tree.root, 3);
    tree.remove(tree.root, 10);
    tree.inOrderTraversal(tree.root); cout << endl;
    tree.remove(tree.root, 11);
    tree.remove(tree.root, 4);
    tree.remove(tree.root, 8);
    tree.remove(tree.root, 9);
    tree.inOrderTraversal(tree.root); cout << endl;
    return 0;
}
