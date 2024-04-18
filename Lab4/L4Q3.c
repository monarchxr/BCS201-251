//Program to calculate result of a student and print it

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int cp_count=0,flag=0;
    float total=0;
    int marks[5];
    for(int i=0; i<5; i++){
        scanf("%d", &marks[i]);
        if(marks[i]<0 || marks[i]>100){
            printf("INVALID MARKS");
            flag++;
        }
    }
    
    for(int i=0; i<5; i++){
        total+=marks[i];
    }
    
    total /= 5.0;
    
    for(int i=0; i<5; i++){
        if(marks[i]<30){
            cp_count++;
        }
    }
    
    
    if(flag==0){
        if(total>=75){
            printf("Pass First division %.1f CP:%d", total,cp_count);
        }else if(total<=74 && total>=60){
            printf("Pass Second division %.1f CP:%d", total,cp_count);
        }else if(total<=59 && total>=33){
            printf("Pass Third division %.1f CP:%d", total,cp_count);
        }else if(total<=33 && total>=0){
            printf("Fail CP:%d", cp_count);
        }
    }
    return 0;
}
