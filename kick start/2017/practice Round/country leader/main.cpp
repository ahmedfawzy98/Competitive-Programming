#include <iostream>
#include <fstream>
#include<map>
#include <algorithm>

using namespace std;

int main() {
    ifstream infile("A-small-practice(1).in");
    ofstream outfile;
    if (infile.is_open()){
        outfile.open("output.txt");
        int t,n;
        infile >> t;
        for (int k = 1; k <= t; ++k) {
            infile >> n;
            infile.ignore();
            string s, leader;
            pair<int, string> names[n];
            for (int j = 0; j < n; ++j) {
                map<char, int> m;
                getline(infile, s);
                for (auto i : s){
                    m[i] = 0;
                }
                names[j].first = m.size(); names[j].second = s;
            }
            sort(names, names + n, greater<pair<int,string>>());
             cout << "Case #" << k << ": " << names[0].second << endl;
        }
        infile.close();
        outfile.close();
    }
    return 0;
}