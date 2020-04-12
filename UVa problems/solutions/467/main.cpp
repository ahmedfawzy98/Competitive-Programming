#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

const int maxTime = 60*60;

bool allGreen(int time, vector<int> signals)
{
    for (int i = 0; i < signals.size(); ++i)
    {
        if(time % (signals[i] * 2) >= (signals[i] - 5))
            return false;
    }

    return true;
}

int main() {

    string line;

    int  time , counter = 1;
    while(getline(cin,line))
    {
        stringstream ss(line);

        int minTime = 90;
        vector<int> signals;
        while(ss>> time)
        {
            signals.push_back(time);
            if(time < minTime)
                minTime = time;
        }
        time  = minTime * 2;
        while(!allGreen(time,signals) && time <= maxTime)
            time++;

        if(time == maxTime + 1)
        {
            cout << "Set " << counter << " is unable to synch after one hour.\n";
        }

        else
        {
            cout <<"Set " << counter << " synchs again at " << time / 60 << " minute(s) and " << time % 60 << " second(s) after all turning green.\n";
        }
        counter++;
    }
}