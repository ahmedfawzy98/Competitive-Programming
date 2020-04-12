#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int t,n,k,p,tmp;
    char c;
    cin>>t;
    while(t--){
        cin.ignore();
        cin.ignore();
        cin>>n>>k;
        map<int,bool> a;
        map<int,bool>::iterator it;
        for (int i1 = 1; i1 <= n; ++i1) {
            a[i1] = false;
        }
        for (int i = 0; i < k; ++i) {
            vector<int> nums;
            cin>>p;
            for (int j = 0; j < 2*p; ++j) {
                cin>>tmp;
                nums.push_back(tmp);
            }
            cin>>c;
            if(c == '<' || c == '>'){
                for(it = a.begin(); it != a.end(); ++it){
                    if(find(nums.begin(),nums.end(),it->first) == nums.end()){
                        it->second = true;
                    }
                }
            }
            else{
                for (int j = 0; j < 2*p; ++j) {
                    a[nums[j]] = true;
                }
            }
        }
        int counter = 0;
        for (it = a.begin(); it != a.end(); ++it) {
            if(!it->second){
                counter++;
                tmp = it->first;
            }
        }
        if(counter == 1){
            cout << tmp << endl;
        }else{
            cout << 0 << endl;
        }
        if(t)
            cout << endl;
    }
    return 0;
}