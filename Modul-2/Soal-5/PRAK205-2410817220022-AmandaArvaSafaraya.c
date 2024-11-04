#include <stdio.h>
#include <math.h>

int main() {
    int sisiTinggi, sisiMiring;
    
    scanf("%d", &sisiTinggi); 
    scanf("%d", &sisiMiring);

    int alas = sqrt(sisiMiring*sisiMiring - sisiTinggi*sisiTinggi);

    int keliling = sisiTinggi + sisiMiring + alas; 
    float luas = 0.5 * sisiTinggi * alas;

    printf("Alas = %d cm\n", alas); 
    printf("Tinggi = %d cm\n", sisiTinggi);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %.f cm^2", luas); 

    return 0;
}