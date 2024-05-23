//program for pascal's triangle

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,k,n,c;
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            printf(" ");
        }
        for(k=0; k<=i; k++){
            if(i==0 || k==0){
                c=1;
            }else{
                c = (c*(i-k+1))/k;
            }
            printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}
