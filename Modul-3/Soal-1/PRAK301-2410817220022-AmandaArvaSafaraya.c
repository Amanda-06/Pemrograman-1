#include <stdio.h>

int main(){
    int nilai1, nilai2, nilai3;
    scanf("%d %d %d", &nilai1, &nilai2, &nilai3);

    if(nilai1 > nilai2 && nilai1 > nilai3 && nilai2 > nilai3){
        printf("%d %d %d", nilai3, nilai2, nilai1);
    } else if(nilai2 > nilai1 && nilai2 > nilai3 && nilai1 > nilai3){
        printf("%d %d %d", nilai3, nilai1, nilai2);
    } else if(nilai1 > nilai2 && nilai1 > nilai3 && nilai3 > nilai2){
        printf("%d %d %d", nilai2, nilai3, nilai1);
    } else if(nilai3 > nilai1 && nilai3 > nilai2 && nilai1 > nilai2){
        printf("%d %d %d", nilai2, nilai1, nilai3);
    } else if(nilai3 > nilai1 && nilai3 > nilai2 && nilai2 > nilai1){
        printf("%d %d %d", nilai1, nilai2, nilai3);
    } else {
        printf("%d %d %d", nilai1, nilai3, nilai2);
    }
    return 0;
}