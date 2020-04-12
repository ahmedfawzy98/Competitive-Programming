#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,tmp,counter = 1;
    while(cin>>n, n){
        vector<int> heights;
        int moves = 0, sum = 0,avg;
        for (int j = 0; j < n; ++j){
            cin>>tmp;
            sum += tmp;
            heights.push_back(tmp);
        }
        avg = sum / n;
        for (int i = 0; i < n; ++i) {
            if(heights[i] <= avg)
                continue;
            moves += heights[i] - avg;
        }
        cout << "Set #" << counter++ << endl;
        cout << "The minimum number of moves is " << moves << "." << endl << endl;
    }
    return 0;
}