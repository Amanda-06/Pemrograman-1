#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int all_result = 0;

    for (int i = 1; i <= m; ++i) {
        int result = 0;
        printf("\n");

        for (int j = i; j >= 1; --j) {
            int term = j * n;
            result += term;
            all_result += term;
            printf("(%d * %d)", j, n);
        if (j > 1) {
            printf("+");
        } 
        }
        printf("=%d", result);
    }
    printf("\n%d", all_result); 
    return 0;
}