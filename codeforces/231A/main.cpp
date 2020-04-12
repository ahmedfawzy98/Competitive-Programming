#include <iostream>
using namespace std;

int main() {
    int n, tmp;
    while (cin >> n){
        int problems = 0;
        for (int i = 0; i < n; ++i) {
            int counter = 0;
            for (int j = 0; j < 3; ++j) {
                cin >> tmp;
                if (tmp) counter++;
            }
            if (counter >= 2) problems++;
        }
        cout << problems << endl;
    }
    return 0;
}