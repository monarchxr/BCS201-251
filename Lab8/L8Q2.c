//program to check perfect number

#include<stdio.h>

int divsum(int n){
    int dsum = 0;
    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            dsum+=i;
        }
    }
    return dsum;
}

int main(){
    int a;
    scanf("%d", &a);

    int ans = divsum(a);
    if(ans==a){
        printf("YES");
    }else{
        printf("NO");
    }

}
