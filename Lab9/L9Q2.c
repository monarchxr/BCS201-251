//program for sum of sine series
//sir's approach

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int n){
    int i, res =1;
    for(i=2; i<=n; i++){
        res*=i;
    }
    return res;
}


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float x,sum=0;
    int n,s=1,c=1;
    scanf("%f", &x);
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        sum = sum + s*pow(x,c)/fact(c);
        s=s*(-1);
        c=c+2;
    }
    
    printf("%f", sum);
    return 0;
}
