#include <stdio.h>
#include <math.h>

int ngt(int n)
{
    int cnt = 0;
    for (int i = 1; i <=n; i++)
    {
        if (n % i == 0)
            ++cnt;
    }
    if (cnt == 2)
        return 1;
    else
        return 0;
}


int prime(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            ++cnt;
    }
    if (cnt == 2)
        return 1; // là số nguyên tố
    else
        return 0; // không phải số nguyên tố
}

int snt(int n){
    int cnt = 1;
    for (int i=2; i<=sqrt(n); i++){
        if (n%i==2) return 0;   
    }
    return n>1;
}





int main()
{
    int n;
    scanf("%d", &n);
    if (snt(n))
        printf("YES");
    else
        printf("No");
}


