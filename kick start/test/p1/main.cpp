#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
int binarySearch(vector<int> vec, int x){
    int l = 0, r = vec.size() - 1, m;
    while (l <= r){
         m = l + (r - l) / 2;
        if (vec[m] == x){
            return vec[m];
        }
        if (vec[m] < x){
            l = m + 1;
        }else{
            r = m - 1;
        }
    }
    if (abs(x - vec[m]) > abs(x - vec[m + 1])){
        return vec[m + 1];
    }else{
        return vec[m];
    }
}
int main() {
    int t, n, m, price, tmp;
    ifstream infile("input.txt");
    ofstream outfile;
    if (infile.is_open()){
        outfile.open("output.txt");
        infile >> t;
        infile.ignore();
        for (int i = 1; i <= t; ++i) {
            infile >> price;
            infile >> n;
            vector<pair<string,int>> flavors;
            string s;
            for (int j = 0; j < n; ++j) {
                infile >> s >> tmp;
                flavors.emplace_back(s, tmp);
            }
            infile >> m;
            vector<pair<string,int>> options;
            for (int k = 0; k < m; ++k) {
                infile >> s >> tmp;
                options.emplace_back(s, tmp);
            }
            vector<int> combinations;
            for (const auto& x : flavors) {
                int flavor = x.second;
                combinations.push_back(flavor);
                for (int j = 0; j < options.size(); ++j) {
                    combinations.push_back(flavor + options[j].second);
                }
                for (int k = 0; k < options.size(); ++k) {
                    int op = options[k].second;
                    for (int j = k + 1; j < options.size(); ++j) {
                        combinations.push_back(flavor + op + options[j].second);
                    }
                }
            }
            sort(combinations.begin(), combinations.end());
            int target = binarySearch(combinations, price);
            outfile << "Case #" << i << ": " << target << endl;
            infile.ignore();
        }
        infile.close();
        outfile.close();
    }
    return 0;
}