#pragma once
#include <list>

class Graph{
    int v;
    std::list<int> *adjacency;
    void dfs(int i, bool visited[]);
    public:
        Graph(int n);
        void addEdge(int a, int b);
        void printGraph();
        void dfsSearch(int i);
        void dfsSearchIterative(int i);
        void bfsSearch(int i);
};