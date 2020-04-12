#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int array[10000], i = 0, median;
    string s;
    while (getline(cin, s)){
        s.erase(remove(s.begin(), s.end(),' '),s.end());
        array[i] = stoi(s);
        int size = i + 1;
        sort(array, array + size);
        if ((size & 1) == 0){
            int x = array[(size / 2) - 1], y = array[size / 2];
            median = (x + y) / 2;
        }else{
            median = array[size / 2];
        }
        i += 1;
        cout << median << endl;
    }
    return 0;
}