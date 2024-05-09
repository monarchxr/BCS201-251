//program to print armstrong number in a range

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,n;
    scanf("%d %d", &a, &b);
    for(n=a; n<b; n++){
        int temp = n;
        int count = 0;
        int digit = 0, digitpsum = 0;

        //to count digits without loop use: int count = (int) log10(n)+1;
        
        while(temp!=0){
            temp/=10;
            count++;
        }

        temp = n;

        while(temp!=0){
            digit = temp%10;
            digitpsum+= pow(digit,count);
            temp/=10;
        }

        if(digitpsum==n){
            printf("%d ", n);
        }
    }
    return 0;
}
