//program to print nth fibonacci number

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,i,first=0,second=1,desired;
    scanf("%d", &N);
    
    if(N==1){
        printf("%d", first);
    } else if(N==2){
        printf("%d", second);
    } else{
        for(i=3; i<=N; i++){
            desired = first + second;
            first = second;
            second = desired;
        }
        printf("%d", desired);
    }
    
    
}
