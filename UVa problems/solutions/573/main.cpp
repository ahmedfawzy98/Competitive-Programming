#include <iostream>
using namespace std;
int main() {
    double h,u,d,f,x,sum,counter = 1;
    while(cin>>h>>u>>d>>f){
        if(!h){break;}
        x = u*(f/100);
        sum = u ;
        while(1){
            if(sum > h){
                cout<<"success on day "<<counter<<endl;
                break;
            }
            sum -= d;
            if(sum < 0){
                cout<<"failure on day "<<counter<<endl;
                break;
            }
            counter++;
            if(u>0){
                u -= x;
            }
            sum += u ;
        }
        counter = 1;
    }
    return 0;
}