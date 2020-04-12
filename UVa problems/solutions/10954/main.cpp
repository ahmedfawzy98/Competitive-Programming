#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, tmp;
    while (cin >> n, n){
        priority_queue<int, vector<int>, greater<int>> pq;
        while (n--){
            cin >> tmp;
            pq.push(tmp);
        }
        int total = 0, cost = 0;
        while (pq.size() > 1){
            total = pq.top();
            pq.pop();
            total += pq.top();
            pq.pop();
            cost += total;
            pq.push(total);
        }
        cout << cost << endl;
    }
    return 0;
}