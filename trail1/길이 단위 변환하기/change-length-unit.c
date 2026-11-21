#include <stdio.h>

int main() {
    float F, M;
    float a, b;
    a = 9.2;
    b = 1.3;
    F = 30.48 * a;
    M = 160934 * b;
    printf("%.1lfft = %.1lfcm\n", a, F);
    printf("%.1lfmi = %.1lfcm", b, M); 
    return 0;
}