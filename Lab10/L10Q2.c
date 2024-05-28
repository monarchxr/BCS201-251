//program for reverse number using recursion

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void numrev(int a){
    if(a<10){
        printf("%d", a);
        return;
    }else{
        printf("%d", a%10);
        return numrev(a/10);
    }
}


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    numrev(n);
    return 0;
}
