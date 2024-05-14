#include <stdio.h>
int main() {
    int a, b, temp = 0;
    scanf("%d", &a);
    while (a >= 1) {
        temp = a % 10 + (temp * 10);
        a = a / 10;
    }
    while (temp != 0) {
        b = temp % 10;
        switch(b){
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }

        temp = temp / 10;
    }

    return 0;
}
