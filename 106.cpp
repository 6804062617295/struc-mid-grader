#include <stdio.h>

int main() {
    int year;
    float grade;
    char help;
    scanf("%d %f %c", &year, &grade, &help);

    if (grade >= 3.00) {
        printf("approved\n");
    } 
    else if (year >= 2 && grade >= 2.50 && help == 'Y') {
        printf("approved\n");
    } 
    else {
        if (year < 2) {
            printf("not approved:year < 2\n");
        }
        else if (grade < 2.50) {
            printf("not approved:grade < 2.50\n");
        }
        else {
            printf("not approved:no help\n");
        }
    }

    return 0;
}