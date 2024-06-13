//program for reverse by recursion

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum = 0,rem;
int rev_num(int n){
    if(n){
        rem=n%10;
        sum = sum*10 + rem;
        rev_num(n/10);
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", rev_num(n));
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
