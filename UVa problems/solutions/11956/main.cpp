#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;
int main() {
    char pf[100001];
    int d[100],p;
    int t,counter = 1;
    scanf("%d",&t);
    while(t--){
        for (int k = 0; k < 100; d[k] = 0, ++k);
        p = 0;
        scanf("%s",pf);
        for (int i = 0; i < strlen(pf); ++i) {
            if(pf[i] == '<'){
                p--;
                if(p == -1){
                    p = 99;
                }
            }
            else if(pf[i] == '>'){
                p++;
                if(p == 100){
                    p = 0;
                }
            }
            else if(pf[i] == '+'){
                ++d[p];
                if(d[p] == 256){
                    d[p] = 0;
                }
            }
            else if(pf[i] == '-'){
                --d[p];
                if(d[p] == -1){
                    d[p] = 255;
                }
            }
        }
        printf("Case %d:",counter++);
        for (int j = 0; j <100; ++j) {
            printf(" %.2X",d[j]);
        }
        printf("\n");
    }
    return 0;
}
/*
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;
int main() {
    char pf[100001];
    int d[100],*p,*start,*end;
    int t,counter = 1;
    scanf("%d",&t);
    while(t--){
        for (int k = 0; k < 100; ++k) {
            d[k] = 0;
        }
        p = start = d;
        end = d + 99;
        scanf("%s",pf);
        for (int i = 0; i < strlen(pf); ++i) {
            if(pf[i] == '<'){
                if(p == start){
                    p = end;
                }else{
                    p--;
                }
            }
            else if(pf[i] == '>'){
                if(p == end){
                    p = start;
                }else{
                    p++;
                }
            }
            else if(pf[i] == '+'){
                if((*p) == 255){
                    (*p) = 0;
                }else{
                    (*p)++;
                }
            }
            else if(pf[i] == '-'){
                if((*p) == 0){
                    (*p) = 255;
                }else{
                    (*p)--;
                }
            }
        }
        printf("Case %d:",counter++);
        for (int j = 0; j <100; ++j) {
            printf(" %.2X",d[j]);
        }
        printf("\n");
    }
    return 0;
}*/
/* same time solutions */