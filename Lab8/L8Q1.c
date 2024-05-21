//program to find strong numbers less than n
//without recursion
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int n){
    int i,res=1;
    for(i=2; i<=n; i++){
        res*=i;
    }
    return res;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,n,temp,sum,digit;
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        temp = i;
        sum = 0;
        while(temp!=0){
            digit = temp%10;
            sum += fact(digit);
            temp/=10;
        }
        if(sum==i){
            printf("%d ", i);
        }
    }
    return 0;
}
