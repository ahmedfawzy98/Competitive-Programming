#include <cstdio>
using namespace std;
int left[100005], right[100005];

int main() {
    int s, b;
    while(scanf("%d %d",&s,&b),s || b){
        for (int i = 1; i <= s; ++i) {
            left[i] = i-1;
            right[i] = i+1;
        }
        left[1] = -1;
        right[s] = -1;
        int l, r;
        for (int j = 0; j < b; ++j) {
            scanf("%d %d",&l,&r);
            left[right[r]] = left[l];
            if(left[l] == -1){
                printf("* ");
            }
            else{
                printf("%d ",left[l]);
            }
            right[left[l]] = right[r];
            if(right[r] == -1){
                printf("*\n");
            }
            else{
                printf("%d\n",right[r]);
            }
        }
        printf("-\n");
    }
    return 0;
}