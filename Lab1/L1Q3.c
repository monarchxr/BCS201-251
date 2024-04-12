//LAB 1 QUESTION 3
//convert given temperature

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    float temp;
    scanf("%f", &temp);
    printf("%.2f\n", ((temp-32)*(5))/9);
    return 0;
}
