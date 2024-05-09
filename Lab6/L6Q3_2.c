//another approach to prime

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,prime=1;
    scanf("%d", &n);
    if(n==0 || n==1){
        prime=0;
    }
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            prime=0;
        }
    }
    
    if(prime){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
