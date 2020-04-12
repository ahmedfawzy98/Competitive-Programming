#include <iostream>

using namespace std;

int main() {
    int t, msum = 0, fsum = 0;
    string tmp;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,tmp);
        for (int i = 0; i < tmp.size(); ++i) {
            if(tmp[i] == ' '){continue;}
            else if(tmp[i] == 'M'){msum++;}
            else{fsum++;}
        }
        if(msum % 2 == 0 && fsum % 2 == 0 && msum == fsum){
            cout<<"LOOP"<<endl;
        }else{
            cout<<"NO LOOP"<<endl;
        }
        msum = fsum = 0;
    }
    return 0;
}