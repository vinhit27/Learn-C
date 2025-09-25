#include <stdio.h>
#include <stdlib.h>

void main1(){
    int a = 300;      
    int *ptr;          // Khai báo con trỏ kiểu int
    ptr = &a;          // Gán địa chỉ của a cho con trỏ ptr
    printf("Dia chi cua bien a : %ls\n", &a);
    printf("Gia tri cua con tro ptr : %d\n", *ptr);

    printf("gia tri cua bien a: %d\n", a);
    printf("gia tri ma con tro ptr dang quan li: %d\n", *ptr);

    *ptr=1000; //a=1000
    printf("gia tri cua bien a: %d\n", a);
    printf(" gia tri cua bien a ma con tro dang quan li: %d\n",a);
}


//pass-by-reference 
void tang1(int a){
    a+= 100;
}

void tang2(int *a){
    *a+=100;
}

void tinh(){
    int a=100;
    tang1(a);
    printf(" gia tri cua bien a sau khi ham tang 1 ket thuc: %d\n", a);
    tang2(&a);
    printf("gia tri cua a sau khi tang2: %d\n", a);
}


//thay doi gtri bien bang con tro
void change(){
    int n = 5;
    int *ptr;
    ptr = &n;
    printf("Gia tri ban dau cua value: %d\n", n);
    *ptr = 20;
    printf("Gia tri sau khi thay doi bang con tro: %d\n", n);
}


//con tro va mang 
void tvm(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr= arr; // arr la con tro tro den phan tu dau tien cua mang

    printf("Cac phan tu cua mang bang cach su dung con tro:\n");
    for (int i = 0; i < 5; i++) {
        printf("Phan tu thu %d: %d\n", i, *(ptr + i));
    }
}

//hoan doi 2 giatri cho nhau 
void swap(int *a, int *b) {
    int temp = *a; // Luu gia tri cua bien ma con tro 'a' dang tro den
    *a = *b;      // Gan gia tri cua 'b' cho 'a'
    *b = temp;    // Gan gia tri tam thoi cho 'b'
}





// con tro va mang
void arr(){
    int a[5];
    int *ptr = a;
    ++ptr;
    printf("%d\n", *ptr);
    --ptr;
    printf("%d\n", *ptr);
}

//cap phat dong
//calloc 
// dataType *pointerName = (type_cast*)malloc(size_of_byte)
void cpd(){
    
}

void change1(){
    int x = 10, y = 20;

    printf("Truoc khi hoan doi: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("Sau khi hoan doi: x = %d, y = %d\n", x, y);
}



//tinh tong mang bang con tro
int main(){
    int n;
    printf("so phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int *ptr;
    ptr = a;
    int sum = 0;
    
    // tinh tong cac phan tu
    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;  
    }
    printf("Tong cac phan tu trong mang la: %d\n", sum);
}