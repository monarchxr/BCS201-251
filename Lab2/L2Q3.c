//LAB 2 Question 3
//Leap year check

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int y;
    scanf("%d", &y);
    
    if(y%400==0){
        printf("YES");
    } else if(y%100==0){
        printf("NO");
    } else if(y%4==0){
        printf("YES");
    } else{
        printf("NO");
    }
    return 0;
}
