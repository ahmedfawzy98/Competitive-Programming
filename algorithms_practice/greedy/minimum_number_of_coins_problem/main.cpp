#include <iostream>
#include <vector>

using namespace std;

int denominations[] = {1, 2, 10, 20, 50,  100, 500, 1000};
int deno_size = sizeof(denominations) / sizeof(int);

void min_coins(int value){
    vector<int> result;
    for (int i = deno_size - 1; i > -1; --i) {
        while(value >= denominations[i]){
            result.push_back(denominations[i]);
            value -= denominations[i];
        }
    }
    cout << "Minimal changes: ";
    for(auto it : result){
        cout << it << ' ';
    }
    cout << endl;
}

int main() {
    int n = 121;
    min_coins(n);
    return 0;
}