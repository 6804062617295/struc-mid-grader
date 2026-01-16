#include <stdio.h>

int main() {
    int a,b,c,total,needed;
    char x,y;
    scanf("%d %c %d %c %d",&a,&x,&b,&y,&c);
    total = a + b + c;
    if (total >= 80) {
        printf("A");
    } else if (total >= 70) {
        needed = 80 - total;
        printf("B %d", needed);
    } else if (total >= 60) {
        needed = 80 - total;    
        printf("C %d", needed);
    } else if (total >= 50) {
        needed = 80 - total;    
        printf("D %d", needed);
    } else {
        needed = 80 - total;    
        printf("F %d", needed);
    }
    return 0;
}