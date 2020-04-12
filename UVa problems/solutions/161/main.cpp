#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

bool allGreen(int time, vector<int> signals){
    for (int i = 0; i < signals.size(); ++i) {
        if(time % (signals[i] * 2) >= (signals[i] - 5)){
            return false;
        }
    }
    return true;
}
int main() {
    string line;
    int time = -1, maxTime = 5 * 60 * 60,h,m;
    while(getline(cin,line), line[0] != '0'){
        stringstream ss;
        int minTime = 90;
        vector<int> signals;
        while(1){
            ss.str(line);
            while(ss>>time){
                if(!time){break;}
                signals.push_back(time);
                if(time < minTime){
                    minTime = time;
                }
            }
            if(time){getline(cin,line);ss.clear();}
            else{break;}
        }
        time  = minTime * 2;
        while(!allGreen(time,signals) && time <= maxTime)
            time++;
        if(time == maxTime + 1){
            cout << "Signals fail to synchronise in 5 hours" << endl;
        }
        else{
            h = time / (60*60);
            time -= h*60*60;
            m = time / 60;
            time-= m*60;
            printf("%.2d:%.2d:%.2d\n",h,m,time);
        }
    }
    return 0;
}