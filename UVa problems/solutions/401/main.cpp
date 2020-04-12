#include <iostream>

using namespace std;
bool isPalindrome(string word){
    int start = 0, end = word.length() - 1;
    while(start < end){
        if(word[start] != word[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
bool isMirrored(string word){
    int start = 0, end = word.length() - 1;
    while(start <= end){
        switch(word[start]){
            case 'A':
                if(word[end] != 'A')
                    return false;
                break;
            case 'E':
                if(word[end] != '3')
                    return false;
                break;
            case 'H':
                if(word[end] != 'H')
                    return false;
                break;
            case 'I':
                if(word[end] != 'I')
                    return false;
                break;
            case 'J':
                if(word[end] != 'L')
                    return false;
                break;
            case 'L':
                if(word[end] != 'J')
                    return false;
                break;
            case 'M':
                if(word[end] != 'M')
                    return false;
                break;
            case 'O':
                if(word[end] != 'O')
                    return false;
                break;
            case 'S':
                if(word[end] != '2')
                    return false;
                break;
            case 'T':
                if(word[end] != 'T')
                    return false;
                break;
            case 'U':
                if(word[end] != 'U')
                    return false;
                break;
            case 'V':
                if(word[end] != 'V')
                    return false;
                break;
            case 'W':
                if(word[end] != 'W')
                    return false;
                break;
            case 'X':
                if(word[end] != 'X')
                    return false;
                break;
            case 'Y':
                if(word[end] != 'Y')
                    return false;
                break;
            case 'Z':
                if(word[end] != '5')
                    return false;
                break;
            case '1':
                if(word[end] != '1')
                    return false;
                break;
            case '2':
                if(word[end] != 'S')
                    return false;
                break;
            case '3':
                if(word[end] != 'E')
                    return false;
                break;
            case '5':
                if(word[end] != 'Z')
                    return false;
                break;
            case '8':
                if(word[end] != '8')
                    return false;
                break;
            default:
                return false;
        }
        start++;
        end--;
    }
    return true;
}
int main() {
    string word;
    while(getline(cin,word)){
        if(!isPalindrome(word) && !isMirrored(word)){
            cout << word << " -- is not a palindrome.\n" << endl;
        }
        else if(isPalindrome(word) && !isMirrored(word)){
            cout << word << " -- is a regular palindrome.\n" << endl;
        }
        else if(!isPalindrome(word) && isMirrored(word)){
            cout << word << " -- is a mirrored string.\n" << endl;
        }
        else if(isPalindrome(word) && isMirrored(word)){
            cout << word << " -- is a mirrored palindrome.\n" << endl;
        }
    }
    return 0;
}