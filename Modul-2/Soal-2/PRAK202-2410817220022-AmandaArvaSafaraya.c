#include <stdio.h>

int main() {
    float nilaiPertama, nilaiKedua;

    printf("Masukan Nilai Pertama   : ");
    scanf("%g", &nilaiPertama);
    printf("Masukan Nilai Kedua     : ");
    scanf("%g", &nilaiKedua);
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", nilaiPertama, nilaiKedua, nilaiPertama + nilaiKedua);
    return 0;
}