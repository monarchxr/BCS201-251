//GCD Approach 1

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,b,g;
    
    scanf("%d %d", &a,&b);
    if(a<b){
        a = a + b;
        b = a - b;
        a = a - b;
    }
    
    while(b!=0){
        g = a % b;
        a = b;
        b = g;
    }
    
    printf("%d", a);
    return 0;
}
