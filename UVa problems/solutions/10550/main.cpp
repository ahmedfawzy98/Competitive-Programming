#include <iostream>
using namespace std;

int main() {
     int  st , f,s,l;
     cin>>st>>f>>s>>l;
     while (st || f || s || l){
         cout<< 1080+((st-f+40)%40 + (s-f+40)%40 + (s-l+40)%40 )*9<<endl;
         cin>>st>>f>>s>>l;
     }
    return 0;
}