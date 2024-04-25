//program to find weekday

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int dd,mm,yyyy,x,i;
    scanf("%d %d %d", &dd,&mm,&yyyy);
    
    int valid = 1;
    
    // checking invalid cases
    
    if(dd>31 || dd<1 || mm>12 || mm<1 || yyyy<1){
        valid = 0;
    } else if(dd>30 && (mm==2 || mm==4 || mm==6 || mm==9 || mm==11)){
        valid = 0;
    } else if(dd>31 && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)){
        valid = 0;
    }
    
    if(mm==2 && ((yyyy%400==0) || (yyyy%100!=0 && yyyy%4==0))){
        if(dd>29){
            valid = 0;
        }
    }else if(mm==2 && dd>28){
        valid = 0;
    }
    
    if(valid==0){
        printf("INVALID DATE");
    } else{
        x = 365*(yyyy-1) + yyyy/4 + yyyy/400 - yyyy/100 + dd;
        for(i=1; i<mm; i++){
            x=x+(i==2?28:(i==4||i==6||i==9||i==11)?30:31);
        
        }
        if(x%7==0){
            printf("SUNDAY");
        } else if(x%7==1){
            printf("MONDAY");
        } else if(x%7==2){
            printf("TUESDAY");
        } else if(x%7==3){
            printf("WEDNESDAY");
        } else if(x%7==4){
            printf("THURSDAY");
        } else if(x%7==5){
            printf("FRIDAY");
        } else{
            printf("SATURDAY");
        }
        
    }
return 0;
}
