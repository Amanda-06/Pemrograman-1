#include <stdio.h>

int main(){
    int nilai1, nilai2;
    scanf("%d %d", &nilai1, &nilai2);

    if(nilai1 > nilai2){
        printf("%d %d\n", nilai2, nilai1);
    } else {
        printf("%d %d\n", nilai1, nilai2);
    }
    return 0;
}