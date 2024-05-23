//program for divide number into sum of 2 primes
//not passed all test cases

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primecheck(int n){
    if(n<=1){
        return 0;
    }
    
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            return 0;
         }
    }
    return 1;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    if(n==1){
        return 0;
    }
    for(int i=2; i<=n/2; i++){
        if(primecheck(i) && primecheck(n-i)){
            printf("%d=%d+%d\n", n,i,n-i);
        }
    }
    return 0;
}
