#include <stdio.h>

int linear_search(int *arr, int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i]==key){
            return i;
            break;
        }
    }
    return -1;
}


int main() {

    int n,key;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &key);
    
    int ans = linear_search(arr,n,key);
    
    if(ans!=-1){
        printf("%d", ans);
    }else{
        printf("Key does not exist");
    }
}