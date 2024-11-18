#include <stdio.h>

    int main(){
    int angka1, angka2, angka3; scanf("%d %d %d",&angka1 ,&angka2, &angka3);
    if(angka1 > angka2 && angka1 > angka3){
        if(angka2 > angka3) {printf("%d %d %d",angka3 , angka2, angka1);}
        else {printf("%d %d %d",angka2, angka3, angka1);} }

    else if (angka2 > angka3 && angka2 > angka1){
        if(angka1 > angka3) {printf("%d %d %d",angka3, angka1, angka2);}
        else{printf("%d %d %d", angka1, angka3, angka2);}}
    
    else if(angka3 > angka1 && angka3 > angka2){
        if(angka1 > angka2) {printf("%d %d %d",angka2,angka1, angka3);}
        else {printf("%d %d %d",angka1, angka2, angka3);}}
        return 0;
}