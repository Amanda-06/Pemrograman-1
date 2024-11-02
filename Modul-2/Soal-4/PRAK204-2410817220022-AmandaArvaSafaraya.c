#include <stdio.h>

int main() {
    float jarijari, tinggi;
    float phi = 22.0 / 7.0; 

    scanf("%f", &jarijari);
    scanf("%f", &tinggi);
    
    float volume = phi * jarijari * jarijari * tinggi;
    float luas = 2 * phi * jarijari * tinggi + 2 * phi * jarijari * jarijari;
    float keliling = 2 * phi * jarijari; 

    printf("Volume = %.2f\n", volume);      
    printf("Luas = %.2f\n", luas);          
    printf("Keliling = %.2f\n", keliling);  

    return 0;
}
