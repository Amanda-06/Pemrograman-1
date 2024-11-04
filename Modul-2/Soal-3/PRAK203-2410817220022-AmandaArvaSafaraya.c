#include <stdio.h>

int main() {
    float a, b, i, j, x, y;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &i);
    scanf("%f", &j);
    scanf("%f", &x);
    scanf("%f", &y);
    printf("%.3f", (a - b) * (i / j) - (x + y));
    return 0;
}