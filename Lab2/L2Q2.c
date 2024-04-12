//LAB 2 Question 2
//calculate gross salary from basic salary,hra,da etc.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float n,da,hra,gs;
    
    scanf("%f", &n);
    
    da = (20 * n)/100.0;
    hra = (25 * n)/100.0;
    gs = da + hra + n;
    
    printf("%.2f", gs);
    
    return 0;
}
