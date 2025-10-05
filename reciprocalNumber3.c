#include <stdio.h>
#include <math.h>

int reversible(int n) {
    int rev = 0, tmp = n;
    while (n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return tmp == rev;
}

int check(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            count++;
            if (i != n / i) count++;
        }
    }
    return count== 3;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int isPerfectNumber = 0; // kiểm tra xem có số đẹp nào không

    for (int i = a; i <= b; i++) {
        if (check(i) && tn(i)) {
            printf("%d ", i);
            isPerfectNumber = 1;
        }
    }

    if (!isPerfectNumber)
        printf("-1");

    return 0;
}
