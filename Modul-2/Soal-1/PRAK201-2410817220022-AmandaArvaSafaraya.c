#include <stdio.h>

int main() {
    char nama[50], nim[50], kelas[50], ttl[50], alamat[50], hobby[50], no_hp[50];
    
    printf("Nama                    : ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM                     : ");
    fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel           : ");
    fgets(kelas, sizeof(kelas), stdin);
    printf("Tempat/Tanggal Lahir    : ");
    fgets(ttl, sizeof(ttl), stdin);
    printf("Alamat                  : ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby                   : ");
    fgets(hobby, sizeof(hobby), stdin);
    printf("No. HP                  : ");
    fgets(no_hp, sizeof(no_hp), stdin);

    printf("Nama                    : %s", nama);
    printf("NIM                     : %s", nim);
    printf("Kelas Paralel           : %s", kelas);
    printf("Tempat/Tanggal Lahir    : %s", ttl);
    printf("Alamat                  : %s", alamat);
    printf("Hobby                   : %s", hobby);
    printf("No. HP                  : %s", no_hp);

    return 0;
}