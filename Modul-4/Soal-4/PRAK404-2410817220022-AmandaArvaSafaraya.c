#include <stdio.h>

int main() {
    int n;
    float NilaiPertama, NilaiKedua;
    while (1) {
        printf("\nPilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &n);

        if (n < 1 || n > 5) { printf("Input anda salah, silahkan coba lagi"); continue;
        } else if (n == 5) {printf("Terimakasih, telah menggunakan kalkulator AMANDA ARVA SAFARAYA"); break; }

        printf("Masukkan nilai pertama : ");
        scanf("%f", &NilaiPertama);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &NilaiKedua);

        if (n == 1) { printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f", NilaiPertama, NilaiKedua, NilaiPertama + NilaiKedua); 
        } else if (n == 2) { printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f", NilaiPertama, NilaiKedua, NilaiPertama - NilaiKedua); 
        } else if (n == 3) { printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f", NilaiPertama, NilaiKedua, NilaiPertama * NilaiKedua); 
        } else if (n == 4) { printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f", NilaiPertama, NilaiKedua, NilaiPertama / NilaiKedua);
        } 
    }
    return 0;
}