//functions for recursive digit sum

int digitsum(long n){
    int sum = 0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}


int superDigit(char* n, int k) {
    long sum = 0;
    for(;*n; n++){
        sum = sum + *n - '0';
    }
    
    sum*=k;
    while(sum>9){
        sum = digitsum(sum);
    }
    return sum;
}
