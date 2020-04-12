#include <iostream>
#include <cmath>

using namespace std;

long long recursion_fib(int n){
    if(n <= 1){
        return n;
    }
    return recursion_fib(n - 1) + recursion_fib(n - 2);
}


long long dynamic_programming_fib(int n){
    long long f[n + 2];
    f[0] = 0; f[1] = 1;
    for (int i = 2; i <= n; ++i) {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

long long dp_space_optimized(int n){
    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

double fib_using_formula(int n){
    double x = (1 + sqrt(5)) / 2;
    return round(pow(x, n) / sqrt(5));
}

int main() {
    int n;
    long long result;
    cout << "n = " << "";
    cin >> n;

    clock_t time = clock();
    result = recursion_fib(n);
    time = clock() - time;
    cout << "Result = " << result << endl;
    printf("Time taken (recursion)= %f\n", (double) time / CLOCKS_PER_SEC);

    time = clock();
    result = dynamic_programming_fib(n);
    time = clock() - time;
    cout << "Result = " << result << endl;
    printf("Time taken (dynamic programming)= %f\n", (double) time / CLOCKS_PER_SEC);

    time = clock();
    result = dp_space_optimized(n);
    time = clock() - time;
    cout << "Result = " << result << endl;
    printf("Time taken (dynamic programming space optimized)= %f\n", (double) time / CLOCKS_PER_SEC);

    time = clock();
    double x = fib_using_formula(n);
    time = clock() - time;
    cout << "Result = " << x << endl;
    printf("Time taken (using formula)= %f\n", (double) time / CLOCKS_PER_SEC);
    return 0;
}