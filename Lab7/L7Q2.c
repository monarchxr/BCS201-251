//program for coins and triangles

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,n,t;
    
    scanf("%d\n", &t);
    for(i=0; i<t; i++){
        scanf("%d\n", &n);
        j=1;
        while(n>=j){
            n -= j;
            j++;
        }
        printf("%d\n", j-1);
    }
    return 0;
}
