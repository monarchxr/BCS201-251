#include <stdio.h>
//program for binary search
int Binary_search(int *arr, int key, int n, int low, int high){
    
    if(low>high) return -1;

    int mid = (low+high)/2;
    
    if(arr[mid]==key){ 
        return mid;
    }else if(arr[mid]>key){
        return Binary_search(arr,key,n,low,mid-1);
    }else{
        return Binary_search(arr,key,n,mid+1,high);
    }
}

int main() {
    int n,key,low,high;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0 ; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 1; i<n; i++){
        if(arr[i-1]>arr[i]){
            printf("Binary search could not be implemented");
            return 0;
        }
    }

    scanf("%d", &key);
    low = 0; high = n-1;
    int index = Binary_search(arr,key,n,low,high);
    
    if(index!=-1){
        printf("%d", index);
    }else{
         printf("Key does not exist");
    }
}