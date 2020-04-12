#include <iostream>
#include <vector>
#include <fstream>
#include <climits>
#include <map>
#include <algorithm>
using namespace std;
typedef pair<int, int> ii;
class Graph {
    vector<vector<pair<int, int>>> adjList;
public:
    Graph(int v) {
        adjList.resize(50);
    }

    void addEdge(int i, int j, int weight = 0) {
        adjList[i].push_back(make_pair(j, weight));
    }

    int shortestPath(int source) {
        int v = adjList.size();
        vector<int> dist(v, INT_MAX), parent(v, -1);
        map<int, int> map;
        dist[source] = 0;
        map.insert(make_pair(0, source));
        while (!map.empty()) {
            ii temp = *(map.begin());
            map.erase(map.begin());
            int u = temp.second;
            for (auto i : adjList[u]) {
                int x = i.first, distance = i.second;
                if (dist[x] > dist[u] + distance) {
                    dist[x] = dist[u] + distance;
                    map.insert(make_pair(dist[x], x));
                    parent[x] = u;
                }
            }
        }
        sort(dist.begin(), dist.end());
        return dist[0];
    }
};
int main() {
    int t,n;
    ifstream infile("input.txt");
    ofstream outfile;
    if (infile.is_open()){
        outfile.open("output.txt");
        infile >> t;
        infile.ignore();
        for (int i = 1; i <= t; ++i) {
            infile >> n;
            Graph g(n);
            int x, y;
            for (int j = 0; j < n; ++j) {
                infile >> x >> y;
                g.addEdge(x, y);
            }
            outfile << "Case #" << i << ": " << g.shortestPath(4) << endl;
            infile.ignore();
        }

        infile.close();
        outfile.close();
    }
    return 0;
}