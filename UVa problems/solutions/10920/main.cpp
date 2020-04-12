#include <iostream>
using namespace std;

void fillGrid(long long int size, long long int p, long long int &x, long long int &y){
    long long int counter = size*size, length = size-1, a = length, b = 0, r = 0, c = size-1;
    while(r < a && c > b){
        /*fill last column*/
        for (long long int i = r; i <= a; ++i) {
            if(counter == p){
                x = size - i;
                y = c+1;
            }
            counter--;
        }
        c--;
        /*fill bottom row*/
        for (long long int j = c; j >= b; j--) {
            if(counter == p){
                x = size - a;
                y = j+1;
            }
            counter--;
        }
        a--;
        /*fill first column*/
        if(c > b){
            for (long long int i = a; i >= r; i--) {
                if(counter == p){
                    x = size - i;
                    y = b+1;
                }
                counter--;
            }
            b++;
        }
        /*fill first row*/
        if(r < a){
            for (long long int i = b; i <= c; ++i) {
                if(counter == p){
                    x = size - r;
                    y = i+1;
                }
                counter--;
            }
            r++;
        }
    }
    if(counter == p){
        x = length/2 + 1;
        y = length/2 + 1;
    }
}
int main() {
    long long int size,p;
    while(scanf("%lld %lld",&size,&p) == 2){
        if(!size && !p){
            break;
        }
        long long int x,y;
        fillGrid(size,p,x,y);
        printf("Line = %lld, column = %lld.\n",x,y);
    }
    return 0;
}