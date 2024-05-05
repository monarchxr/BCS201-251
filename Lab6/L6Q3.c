//program to check if input number is prime or not
//approach 1 (basic)

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,count=0;
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    
    if(count==2){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
