#include <stdio.h>


//Form Nhap so hang so cot roi printf.
void form()
{
    int n, m;
    printf("Nhap so luong hang va cot cua ma tran :");
    scanf("%d%d", &n, &m);
    int a[n][m]; // Khai báo mảng 2 chiều (ma trận)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Nhap gia tri cho phan tu o hang %d cot %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d    ", a[i][j]);
        }
        printf("\n");
    }
}



//khoi tao 1 array 2D cho san
void form1(){
    long long a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%lld ", a[i][j]);
        }   
        printf("\n");
    }
}



int main(){
    form1();
}