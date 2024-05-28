//program for check smart number

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int check_smart(int a){
    if(a%2!=0){
        return 0;
    }else{
        return 1;
    }
}


int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n,count=0;
        scanf("%d", &n);
        
        for(int i=1; i<=n/2; i++){
            if(n%i==0){
                count++;
            }
        }
        if(check_smart(count)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
