//GCD Approach 3

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,b;
    scanf("%d %d", &a, &b);
    
    while(a!=b){
        if(a>b){
            a-=b;
        }else{
            b-=a;
        }
    }
    
    printf("%d", a);
    return 0;
}
