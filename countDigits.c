#include <stdio.h>
#include <math.h>

int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int strongNumber(int n) {
    int sum = 0, tmp = n;
    while (n) {
        sum += factorial(n % 10);
        n /= 10;
    }
    return tmp == sum;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int ok = 0; // kiểm tra xem có số strong nào không

    for (int i = a; i <= b; i++) {
        if (strongNumber(i)) {
            printf("%d ", i);
            ok = 1;
        }
    }

    if (!ok)
        printf("0");

    return 0;
}
