#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void select_activities(vector<int> start, vector<int> finish){
    vector<pair<int,int>> ans;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> p_queue;
    for (int i = 0; i < start.size(); ++i) {
        p_queue.push(make_pair(finish[i], start[i]));
    }
    auto it = p_queue.top();
    int s = it.second, f = it.first;
    p_queue.pop();
    ans.push_back(make_pair(s, f));
    while(!p_queue.empty()){
        auto it = p_queue.top();
        p_queue.pop();
        if(it.second > f){
            s = it.second; f = it.first;
            ans.push_back(make_pair(s, f));
        }
    }
    cout << "Selected activities:" << endl;
    for (auto it = ans.begin(); it != ans.end(); it++) {
        cout << "Activity started at : " << (*it).first << " and ends at : " << (*it).second << endl;
    }
}

int main() {
    vector<int> start = {1, 3, 0, 5, 8, 9};
    vector<int> finish = {2, 4, 6, 7, 9, 9};
    select_activities(start, finish);
    return 0;
}