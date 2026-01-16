#include <stdio.h>

int main() {
    int a, b;
    scanf("%d:%d", &a, &b);
    if ((a == 7 && b >= 10) || (a == 8) || (a == 9 && b <= 30)) {
        printf("Y");
    } else {
        printf("N");
    }

    return 0;
}