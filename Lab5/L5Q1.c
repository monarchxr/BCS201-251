//Calculator Implementation

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,b;
    char ope;
    
    
    scanf("%d %d\n", &a,&b);
    scanf("%c", &ope);
    
    switch(ope){
        case '+':
            printf("%d", a+b);
            break;
        case '-':
            printf("%d", a-b);
            break;    
        case '*':
            printf("%d", a*b);
            break;
        case '/':
            printf("%d", a/b);
            break;
        default:
            printf("Invalid Choice");
            break;
    }
    return 0;
}
