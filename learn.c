#include <stdio.h>
#include <math.h>

//return_value_type function_name(parameter_list) {
//statements;
// }


//Xay dung 1 ham in dong xin chao ra man hinh

void xin_chao(){
    printf("XIn chao !\n");
    printf(" Hello !\n");
}

//Xay dung ham tinh tong cac so tu 1 toi n
long long tong(int n){
    int sum=0;
    for (int i=1; i<=n; i++){
        sum+=1;
        return sum;
    }
}

//tra ve gia tri min max
int max(int a, int b){
    if (a>b) return a;
    else return b;
}


int main(){
    xin_chao(); //function call: 
    return 0;
}
/* result:  XIn chao !
            Hello !   */


