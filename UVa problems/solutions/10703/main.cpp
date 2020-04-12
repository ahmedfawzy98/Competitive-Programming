#include <iostream>
#include <vector>

using namespace std;
int w,h;
void changeInPoints(vector<vector<bool>>matrix,int x1, int y1, int x2, int y2, int diff){
    matrix[x1][y1] = true;
    matrix[x2][y2] = true;
    if(x1+diff > 0 && x1+diff < w){
        matrix[x1+diff][y1] = true;
    }
    if(x1-diff > 0 && x1-diff < w){
        matrix[x1-diff][y1] = true;
    }
}
int main() {
    int n, x1, x2, y1, y2, tmp;
    while(cin>>w>>h>>n,w){
        vector<vector<bool>> matrix(500,vector<bool>(500,false));
        for (int i = 0; i < n; ++i) {
            cin>>x1>>y1>>x2>>y2;
            if((x1 == x2) && (y1 == y2)){
                matrix[x1][y1] = true;
            }
            else if(x1 == x2){
                tmp = y1 - y2;
                if(tmp > 0){
                    matrix[x1][y1] = true;
                    matrix[x2][y2] = true;
                    matrix[x1+tmp][y1] = true;
                    matrix[x1-tmp][y1] = true;
                }
                else{

                }
            }
        }
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}