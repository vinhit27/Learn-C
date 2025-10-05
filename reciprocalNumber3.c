#include <stdio.h>
#include <math.h>

int tn(int n) {
    int rev = 0, tmp = n;
    while (n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return tmp == rev;
}

int check(int n) {
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cnt++;
            if (i != n / i) cnt++;
        }
    }
    return cnt == 3;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int ok = 0; // kiểm tra xem có số đẹp nào không

    for (int i = a; i <= b; i++) {
        if (check(i) && tn(i)) {
            printf("%d ", i);
            ok = 1;
        }
    }

    if (!ok)
        printf("-1");

    return 0;
}
