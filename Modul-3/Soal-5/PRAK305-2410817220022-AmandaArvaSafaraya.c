#include <stdio.h>

int main(){
int input_detik;

    int hari = 0, menit = 0, detik = 0, jam = 0;
    scanf("%d", &input_detik);
    while(input_detik > 0){
        if(input_detik >= 86400){
            hari++;
            input_detik = input_detik - 86400;
        } else if(input_detik >= 3600 && input_detik <= 86400.){
            jam++;
            input_detik = input_detik - 3600;
        } else if(input_detik >= 60 && input_detik <= 3600){
            menit++;
            input_detik = input_detik - 60;
        } else{
            detik++;
            input_detik--;
        }
    }

    if(hari >= 1){
        printf("%d hari %.2d:%.2d:%.2d\n", hari, jam, menit, detik);
    } else{
            printf("%.2d:%.2d:%.2d\n", jam, menit, detik);
    }
    return 0;
}