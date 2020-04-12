#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int l,lastR,lastD,minDistance;
    string tmp;
    while (cin >> l, l != 0) {
        cin >> tmp;
        minDistance = l;
        lastR = lastD = -l;
        for (int i = 0; i < l; ++i) {
            if(tmp[i] == 'Z'){
                minDistance = 0;
                break;
            }
            else if(tmp[i] == 'R'){
                minDistance = min(minDistance,i-lastD);
                lastR = i;
            }
            else if(tmp[i] == 'D'){
                    minDistance = min(minDistance,i-lastR);
                    lastD = i;
                }
        }
        cout<< minDistance << endl;
    }
        return 0;
}