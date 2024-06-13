//gcd via recursion

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a==b) return a;
    
    if(a>b) return gcd(a-b,b);
    return gcd(a,b-a);
}


int main() {

    int t;
    scanf("%d", &t);
    while(t--){
        int a,b;
        scanf("%d %d", &a, &b);
        printf("%d\n", gcd(a,b));
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
    
}
