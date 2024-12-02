#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        if(i % 2 == 1) {
        printf("%d ", i);
        }
    }
    printf("\n");
    for (int j = n; 1 <= j; --j) {
        if(j % 2 == 0) {
        printf("%d ", j);
        }
    }
    return 0;
}