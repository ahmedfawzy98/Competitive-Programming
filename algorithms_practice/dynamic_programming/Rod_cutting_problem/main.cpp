#include <iostream>
#include <climits>

using namespace std;

int cr_recursion(int price[], int size){
    if(size == 0){
        return 0;
    }
    int max_val = INT_MIN;
    for (int i = 0; i < size; ++i) {
        max_val = max(max_val, price[i] + cr_recursion(price, size - i - 1));
    }
    return max_val;
}
int cr_dynamic_programming(int price[], int size){
    int f[size + 1];
    f[0] = 0;
    for (int i = 1; i <= size; ++i) {
        int max_val = INT_MIN;
        for (int j = 0; j < i; ++j) {
            max_val = max(max_val, price[j] + f[i - j - 1]);
        }
        f[i] = max_val;
    }
    return f[size];
}

int main() {
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(price) / sizeof(int), result;

    clock_t time = clock();
    result = cr_recursion(price, size);
    time = clock() - time;
    cout << "Maximum obtainable value = " << result << endl;
    printf("Time taken (recursion)= %f\n",(double) time / CLOCKS_PER_SEC);

    time = clock();
    result = cr_dynamic_programming(price, size);
    time = clock() - time;
    cout << "Maximum obtainable value = " << result << endl;
    printf("Time taken (dynamic programming)= %f\n",(double) time / CLOCKS_PER_SEC);
    return 0;
}