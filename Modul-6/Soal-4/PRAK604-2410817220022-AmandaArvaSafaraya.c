#include <stdio.h>
#include <string.h>

int main() {
    char kode [50];
    char pesanMasuk [50];
    int char_sama = 0;
    int char_tidaksama = 0;

    fgets(kode, sizeof(kode), stdin);
    fgets(pesanMasuk, sizeof(pesanMasuk), stdin);

    if(strlen(kode) != strlen(pesanMasuk)){
        printf("Panjang kalimat berbeda, pesan palsu");
        return 1;
    }

    for(int i = 0; i < strlen(kode) - 1; i++){
        if(kode[i] == pesanMasuk[i]){
            if (kode[i] == ' ') {
                printf(" "); 
            } else {
                char_sama++;
                printf("*"); 
            }
        } else {
           char_tidaksama++;
           printf("#");
        }
    }
    printf("\n");
    printf("* = %d\n", char_sama);
    printf("# = %d\n", char_tidaksama);

    if(char_tidaksama > char_sama){
        printf("Pesan Palsu\n");
    } else {
        printf("Pesan Asli\n");
    }
    return 0;
}