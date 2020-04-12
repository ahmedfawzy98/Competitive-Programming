string x = s;
reverse(s.begin(), s.end());
int length = s.length();
int array[length + 1][length + 1];
for(int i = 0; i <= length; i++){ // for original string x
    for(int j = 0; j <= length; j++){ // for  reversed string s
        if(i == 0 or j == 0){array[i][j] = 0;}
        else if(x[i - 1] == s[j - 1]){array[i][j] = 1 + array[i - 1][j - 1];}
        else{
            array[i][j] = max(array[i][j - 1], array[i - 1][j]);
        }
    }
}
int index = array[length][length], i = length, j = length;
string result;
while(i > 0 and j > 0){
    if(x[i - 1] == s[j - 1]){
        result += x[i - 1];
        i--; j--;
    }else if(array[i - 1][j] < array[i][j - 1]){
        j--;
    }else{
        i--;
    }
}
if(result.empty()){return string(x[0], 1);}
return result;