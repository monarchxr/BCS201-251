//digit multiple number program

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,digit,count=0;
    scanf("%d", &n);
    int temp = n;
    
    while(temp>=1){
        digit = temp%10;
        if(digit!=0 && n%digit==0){
            count++;
        }
        temp/=10;
    }
    
    if(count>=2){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}
