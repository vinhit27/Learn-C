#include <stdio.h>
#include <math.h>

// Hàm kiểm tra số Fibonacci
int solve(long long n) {
    if (n == 0 || n == 1)
        return 1;

    long long fn1 = 1, fn2 = 0;
    for (int i = 3; i <= 20; i++) {
        long long fn = fn1 + fn2;
        if (fn == n)
            return 1;
        fn2 = fn1;
        fn1 = fn;
    }
    return 0;
}

// Hàm kiểm tra số nguyên tố
int prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// Hàm tính tổng các chữ số và kiểm tra xem tổng đó có thuộc dãy Fibonacci không
int sum(int n) {
    int ans = 0;
    while (n) {
        ans += n % 10;
        n /= 10;
    }
    return solve(ans);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int ok = 0; 

    for (int i = a; i <= b; i++) {
        if (sum(i) && prime(i)) {
            printf("%d ", i);
            ok = 1; 
        }
    }

    if (!ok)
        printf("-1");

    return 0;
}
