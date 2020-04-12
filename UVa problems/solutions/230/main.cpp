#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

typedef struct {
    string title , author;
}book;

bool compare(book a, book b){
    if(a.author != b.author){
        return a.author < b.author;
    }
    return a.title < b.title;
}
void readBooks(vector<book> & books) {
    string s;
    while(cin>>s, s != "END"){
        string tmp = "";
        tmp += s;
        book b;
        while(cin>>s, s != "by"){
            tmp += " ";
            tmp += s;
        }
        b.title = tmp;
        cin.ignore();
        getline(cin,b.author);
        books.push_back(b);
    }
}
int main() {
    vector<book> books;
    readBooks(books);
    int bNum = books.size();
    vector<bool> borrowed(bNum,false) , returned(bNum,false);
    map<string,int> bookPosition;
    sort(books.begin(),books.end(),compare);
    for (int i = 0; i < bNum; ++i) {
        bookPosition[books[i].title] = i;
    }
    string s;
    while(cin>>s, s!= "END"){
        string tmp;
        if(s == "BORROW"){
            cin.ignore();
            getline(cin,tmp);
            borrowed[bookPosition[tmp]] = true;
        }
        else if(s == "RETURN"){
            cin.ignore();
            getline(cin,tmp);
            returned[bookPosition[tmp]] = true;
        }
        else{
            int previous = -1;
            for (int i = 0; i < bNum; ++i) {
                if(!borrowed[i])
                    previous = i;
                else if(returned[i]){
                    if(previous == -1){
                        cout << "Put " << books[i].title << " first" << endl;
                    }
                    else{
                        cout << "Put " << books[i].title << " after " << books[previous].title << endl;
                    }
                    borrowed[i] = false;
                    returned[i] = false;
                    previous = i;
                }
            }
            cout << "END" << endl;
        }
    }
    return 0;
}