#include <stdio.h>
//program for matrix rotation 90 deg cw

int main() {
    
    int n;
    scanf("%d", &n);
    int arr[n][n];
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    //transpose
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    
    //row reverse
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n/2; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[i][n-j-1];
            arr[i][n-j-1] = temp;
        }
    }
    
    //print
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}