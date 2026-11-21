#include <stdio.h>

int main() {
    int weight;
    float mg, mw;
    weight = 13;
    mg = 0.165;
    mw = weight * mg;
    printf("%d * %.6lf = %.6lf", weight, mg, mw);
    return 0;
}