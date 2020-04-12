#include <iostream>
#include <vector>
#include <queue>

using namespace std;
typedef pair<int, pair<int, int>> iii;
int main() {
    string s;
    priority_queue<iii , vector<iii>, greater<iii>> pq;
    while (cin >> s, s != "#"){
        iii x;
        cin >>  x.second.first >> x.first;
        x.second.second = x.first;
        pq.push(x);
    }
    int k;
    cin >> k;
    while (k--){
        iii tmp = pq.top();
        pq.pop();
        cout << tmp.second.first << endl;
        tmp.first += tmp.second.second;
        pq.push(tmp);
    }
    return 0;
}