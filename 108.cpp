#include <stdio.h>

int main() {
    float a, b, c, d, td, od, e, te, oe;
    scanf("%f%f", &a, &b);
    c = a * b;

    if (c > 10000) {
        if (c <= 20000) {
            d = c - 10000;
            td = d * 0.08;
            od = c - td;
            printf("%.1f\n", od);
        } 
        else {
            e = c - 20000;
            te = (e * 0.1) + (10000 * 0.08);
            oe = c - te;
            printf("%.1f\n", oe);
        }
    } 
    else {
        printf("%.1f\n", c);
    }
    return 0;
}
