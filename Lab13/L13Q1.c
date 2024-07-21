#include <stdio.h>
//program for bubble sort

int main() {
 
    int n,count_swaps=0;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count_swaps++;
            }
        }
    }
    
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n%d", count_swaps);
    return 0;
}
