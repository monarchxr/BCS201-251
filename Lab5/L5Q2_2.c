//GCD Approach 2

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b,gcd;
    scanf("%d %d", &a,&b);
    
    for(int i=1; i<b; i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    
    printf("%d", gcd);
    return 0;
}
