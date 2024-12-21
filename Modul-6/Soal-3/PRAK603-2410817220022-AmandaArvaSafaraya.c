#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n1 == n2) {
        int matriks[2][n1];
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < n1; ++j) {
                scanf("%d", &matriks[i][j]); }
        } 
        for (int j = 0; j < n1; ++j) {
                int hasil = matriks[0][j] * matriks[1][j];
                printf("%d ", hasil); 
            } printf("\n");
    } else {
        printf("Jumlah tidak sama");
    }
    return 0;
}