#include <iostream>
#include <utility>
#include <vector>
#include <map>
#include <algorithm>

//typedef pair<int,int> Pi;

//void set_partner(pair<int,int> &p,vector<pair<pair<int,int>, char>> vec, char &partner){
    //for(auto pi : vec){
        //if(pi.first == p){pi.second = partner; break;}
    //}
//}

using namespace std;

int main(){
    int T, N, counter = 1;
    pair<int,int> C, J, temp;
    vector<pair<int,int>> vec;
    vector<pair<pair<int,int>, char>> vec_2;
    string result;
    bool fail;
    cin >> T;
    while(T--){
        fail = false;
        result.clear();
        vec.clear();
        vec_2.clear();
        C = {0, 0}; J = {0, 0};
        cin >> N;
        for(int i = 0; i < N; i++){
            cin >> temp.first >> temp.second;
            vec.push_back(temp);
            vec_2.push_back({temp, ' '});
        }
        sort(vec.begin(), vec.end());
        for(int i = 0; i < N; i++){
            auto p = vec[i];
            if(p.first >= C.second){
                C = p; 
                for(int j = 0; j < N; j++){
                    if(vec_2[j].first == p){vec_2[j].second = 'C'; break;}
                }
            }
            else if(p.first >= J.second){
                J = p;
                for(int j = 0; j < N; j++){
                    if(vec_2[j].first == p){vec_2[j].second = 'J'; break;}
                }
            }
            else{fail = true; break;}
        }
        if(fail){cout << "Case #" << counter++ << ": IMPOSSIBLE" << endl;}
        else{
            for(auto p : vec_2){
                result += p.second;
            }
            cout << "Case #" << counter++ << ": " << result << endl;
        }
    }
}
