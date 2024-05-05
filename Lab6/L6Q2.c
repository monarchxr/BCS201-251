//program to print digits of a number in one line

#include <stdio.h>
int main() {
    int a, b, temp = 0;
    scanf("%d", &a);
    while (a >= 1) {
        temp = a % 10 + (temp * 10);
        a = a / 10;
    }
    while (temp >= 1) {
        b = temp % 10;
        if (b == 0)
            printf("Zero ");
        if (b == 1)
            printf("One ");
        if (b == 2)
            printf("Two ");
        if (b == 3)
            printf("Three ");
        if (b == 4)
            printf("Four ");
        if (b == 5)
            printf("Five ");
        if (b == 6)
            printf("Six ");
        if (b == 7)
            printf("Seven ");
        if (b == 8)
            printf("Eight ");
        if (b == 9)
            printf("Nine ");

        temp = temp / 10;
    }

    return 0;
}
