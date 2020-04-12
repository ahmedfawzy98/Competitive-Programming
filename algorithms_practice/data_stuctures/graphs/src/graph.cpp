#include <iostream>
#include "../headers/graph.h"
#include <stack>
#include <queue>
using namespace std;

Graph::Graph(int n): v(n){
    adjacency = new list<int>[v];
}

void Graph::addEdge(int a, int b){
    adjacency[a].push_back(b);
    adjacency[b].push_back(a);
}

void Graph::printGraph(){
    for(int i = 0; i < v; i++){
        cout << "Adjacency list of vertex " << i << endl;
        for(auto j : this->adjacency[i]){
            cout << j << " ";
        }
        cout << endl;
    }
}

void Graph::dfs(int i, bool visited[]){
    visited[i] = true;
    cout << i << " ";
    for(auto x : adjacency[i]){
        if(!visited[x]){dfs(x, visited);}
    }
}

void Graph::dfsSearch(int i){
    bool visited[v] = {false};
    dfs(i, visited);
}

void Graph::dfsSearchIterative(int i){
    bool visited[v] = {false};
    stack<int> stack;
    stack.push(i);
    while(!stack.empty()){
        int y = stack.top();
        stack.pop();
        if(!visited[y]){
            cout << y << " ";
            visited[y] = true;
        }
        for(auto x : adjacency[y]){
            if(!visited[x]){stack.push(x);}
        }
    }
}

void Graph::bfsSearch(int i){
    bool visited[v] = {false};
    queue<int> queue;
    queue.push(i);
    while(!queue.empty()){
        int y = queue.front();
        queue.pop();
        if(!visited[y]){
            cout << y << " ";
            visited[y] = true;
        }
        for(auto x : adjacency[y]){
            if(!visited[x]){queue.push(x);}
        }
    }
}