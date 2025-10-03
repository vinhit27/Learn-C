#include <stdio.h>
#include <math.h>

int tn(long long n) {
    long long rev = 0, m = n;
    while (n != 0) {
        rev = rev * 10 + n % 10;   // đảo ngược số
        n = n / 10;
    }
    if (rev == m)   // nếu số đảo == số gốc
        return 1;   // là số thuận nghịch
    return 0;
}

int main() {
    int testcasenumbers;
    scanf("%d", &testcasenumbers);     
    while (testcasenumbers--) {
        long long n;
        scanf("%lld", &n);
        if (tn(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
}
