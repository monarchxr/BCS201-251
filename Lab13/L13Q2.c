//functions for between 2 sets

int gcd(int a,int b){
    if(a==0){
      return b;
    }
    return gcd(b%a,a);
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int getTotalX(int a_count, int* a, int b_count, int* b) {
    int l=1,g=0,count=0;
    for(int i=0;i<a_count;i++){
        l=lcm(l,a[i]);
    }

    for(int j=0;j<b_count;j++){
        g=gcd(g,b[j]);
    }

    for(int k=l;k<=g;k+=l){
        if(g%k==0){
            count++;
        }
    }
    return count;
}