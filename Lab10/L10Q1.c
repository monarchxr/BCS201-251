//program for divisible sum pairs
//put this in the place of the function

int divisibleSumPairs(int n, int k, int ar_count, int* ar) {
    ar_count = 0;
    for(int i = 0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int sum = ar[i]+ar[j];
            if(sum%k==0){
                ar_count++;
            }
        }
    }
    return ar_count;
}
