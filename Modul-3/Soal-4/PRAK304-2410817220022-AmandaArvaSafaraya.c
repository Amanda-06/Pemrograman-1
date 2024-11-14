#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if (a < 0){
    } else if (a == 0){
        printf("Nol\n");
    } else if(a > 0 && a < 10){
        printf("Satuan\n");
    } else if (a > 10 && a < 20){
        printf("Belasan\n");
    } else if (a >= 20 && a < 100 || a == 10){
        printf("Puluhan\n");
    } else{
        printf("Anda menginput Melebihi Limit Bilangan\n");
    }
    return 0;
}