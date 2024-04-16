//Program to check for palindrome number

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,rem,rev=0;
    scanf("%d", &n);
    int temp = n;
    
    while(n!=0){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    
    if(rev==temp){
        printf("YES");
    } else{
        printf("NO");
    }
    return 0;
}
