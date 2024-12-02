#include <stdio.h>

int main() {
    int n;
    char s[50];
    scanf("%d %s", &n, &s);
    printf("\n");
    for(int i = 1; i <= 50; ++i) {
        if(i % n == 0){
            printf("%s ", s);
            continue;
        }
    printf("%d ", i); 
    }
    return 0;
}