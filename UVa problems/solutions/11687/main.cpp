/*#include <iostream>
#include <string>

using namespace std;

int recursive(int length, int counter){
    if(length == 1)
        return ++counter;
    int newLength(0);
    for ( ; length; length /= 10,newLength++ );
    return recursive(newLength,++counter);
}
int main() {
    string tmp;
    while(cin>>tmp,tmp.compare("END")){
        if(tmp.length() == 1 && tmp[0] == '1'){
            cout << 1 << endl;
            continue;
        }
        cout << recursive(tmp.length(),1) << endl;
    }

    return 0;
}*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string tmp;
    int length, counter;
    while(cin>>tmp, tmp.compare("END")){
        length = tmp.length();
        counter = 1;
        if(length == 1 && tmp[0] == '1'){
            cout << 1 << endl;
            continue;
        }
        while(length > 1){
            int newLength(0);
            for(; length; length /= 10, newLength++);
            length = newLength;
            counter++;
        }
        cout << ++counter << endl;
    }
    return 0;
}