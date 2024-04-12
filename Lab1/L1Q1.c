//LAB - 1 QUESTION 1
//Swap two numbers without using 3rd variable

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int N1,N2;
    scanf("%d %d", &N1, &N2);
    N1 = N1 + N2;
    N2 = N1 - N2;
    N1 = N1 - N2;
    printf("%d %d", N1,N2);
    
    return 0;
}
