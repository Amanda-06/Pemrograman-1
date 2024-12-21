#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int matriksA[a][a];
    int matriksB[a][a];
    int hasil[a][a];

    printf("Matriks A\n");
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            scanf("%d", &matriksA[i][j]); }
        }

    printf("Matriks B\n");
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            scanf("%d", &matriksB[i][j]); }
        }

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            hasil[i][j] = 0;
        }
    }

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            for (int k = 0; k < a; ++k) {
                hasil[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }

    printf("\nMatriks AXB\n");
    for(int i = 0; i < a; i++){
      for(int j = 0; j < a; j++){
        printf("%d ", hasil[i][j]);
      }
      printf("\n");
    }

    return 0;
}