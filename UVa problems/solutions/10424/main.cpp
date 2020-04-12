#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num1 = 0, num2 = 0, x, sum;
    string s1, s2;
    double r;
    while (getline(cin, s1)) {
        getline(cin, s2);
        for (int i = 0; i < s1.length(); ++i) {
            x = tolower(s1[i]);
            if (x >= 97 && x <= 122) {
                num1 += x - 96;
            }
        }
        for (int i = 0; i < s2.length(); ++i) {
            x = tolower(s2[i]);
            if (x >= 97 && x <= 122) {
                num2 += x - 96;
            }
        }
        while (num1 >= 10) {
            sum = 0;
            while (num1) {
                sum += num1 % 10;
                num1 /= 10;
            }
            num1 = sum;
        }
        while (num2 >= 10) {
            sum = 0;
            while (num2) {
                sum += num2 % 10;
                num2 /= 10;
            }
            num2 = sum;
        }
        if (num1 > num2) {
            r = 100.0 * num2 / num1;
        } else {
            r = 100.0 * num1 / num2;
        }
        cout << setprecision(2) << fixed << r << " %" << endl;
        num1 = num2 = 0;
    }
    return 0;
}