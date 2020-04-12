#include <iostream>
#include "../headers/graph.h"
using namespace std;

int main(int, char**) {
    int n = 15, s = 0, t = 14;
    Graph graph = Graph(n);
    graph.addEdge(0, 4); 
    graph.addEdge(1, 4); 
    graph.addEdge(2, 5); 
    graph.addEdge(3, 5); 
    graph.addEdge(4, 6); 
    graph.addEdge(5, 6); 
    graph.addEdge(6, 7); 
    graph.addEdge(7, 8); 
    graph.addEdge(8, 9); 
    graph.addEdge(8, 10); 
    graph.addEdge(9, 11); 
    graph.addEdge(9, 12); 
    graph.addEdge(10, 13); 
    graph.addEdge(10, 14); 
    // graph.printGraph();
    cout << "DFS recursive: "; graph.dfsSearch(3); cout << endl;
    cout << "DFS iterative: "; graph.dfsSearchIterative(3); cout << endl;
    cout << "BFS: "; graph.bfsSearch(3); cout << endl;
    return 0;
}
