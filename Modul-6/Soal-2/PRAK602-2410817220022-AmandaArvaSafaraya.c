#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        int jumlahZetsu = arr[i] * (i + 1);
        printf("%d ", jumlahZetsu);
    }
    return 0;
}