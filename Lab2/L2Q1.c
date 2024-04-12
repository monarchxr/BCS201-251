//LAB 2 Question 1
//calculate simple and compound interest

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float p,r,t;
    
    scanf("%f %f %f", &p, &r, &t);
    
    float si = (p * r * t)/100.00;
    float ci = (p * pow(1+r/100.0,t)) - p;
    
    printf("%.2f %.2f", si, ci);
    
    return 0;
}
