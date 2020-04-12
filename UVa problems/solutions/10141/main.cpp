#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, p, r, counter = 1, com = -1;
    double d, price;
    string tmp, name;
    while (cin >> n >> p, n && p) {
        cin.ignore();
        for (int i = 0; i < n; ++i) {
            getline(cin, tmp);
        }
        for (int j = 0; j < p; ++j) {
            getline(cin, tmp);
            cin >> d >> r;
            cin.ignore();
            if (com < r) {
                com = r;
                name = tmp;
                price = d;
            } else if (com == r && d < price) {
                name = tmp;
                price = d;
            }
            for (int i = 0; i < r; ++i) {
                getline(cin, tmp);
            }
        }
        if (counter > 1)
            cout << endl;
        cout << "RFP #" << counter++ << endl << name << endl;
        com = -1;
    }
    return 0;
}