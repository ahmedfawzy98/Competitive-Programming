#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    string command, s;
    cin>>n;
    bool blocks[n][n];
    for (int i = 0; i < n; ++i) {
        blocks[i][i] = true;
    }
    while(cin>>command, command != "quit"){
        cin>>a>>s>>b;
        if(command == "move" && s == "onto"){
            for (int i = 0; i < n; ++i) {
                if(blocks[a][i] && a != i){
                    blocks[a][i] = false;
                    blocks[i][i] = true;
                }
            }
            blocks[a][b] = true;
        }
        else if(command == "move" && s == "over"){

        }
        else if(command == "pile" && s == "onto"){

        }
        else if(command == "pile" && s == "over"){

        }
    }
    return 0;
}