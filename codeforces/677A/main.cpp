#include <iostream>
using namespace std;

int main() {
    int n, h;
    while (cin >> n >> h){
        int width = 0, tmp;
        while (n--){
            cin >> tmp;
            if (tmp > h){width += 2;}
            else{
                width += 1;
            }
        }
        cout << width << endl;
    }
    return 0;
}