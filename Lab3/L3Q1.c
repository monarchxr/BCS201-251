//Program to check nature of roots and print them

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,b,c;
    float root1,root2;
    int d;
    
    scanf("%d %d %d", &a, &b, &c);
    d = ((b*b)-(4*a*c));
    
    if(d>0){
        printf("REAL AND DISTINCT\n");
        
        root1 = ((-b) + sqrt(d))/(2*a);
        root2 = ((-b) - sqrt(d))/(2*a);
        printf("%.2f %.2f", root1, root2);
        
    } else if(d==0){
        printf("REAL AND EQUAL\n");
        
        root1 = (-b)/(2*a);
        root2 = (-b)/(2*a);
        printf("%.2f %.2f", root1, root2);
        
    } else{
        printf("IMAGINARY ROOTS\n");
        
        float rp= (-b)/(2*a);
        float ip= sqrt(-d)/(2*a);
        printf("%.2f+%.2fi %.2f-%.2fi", rp,ip,rp,ip);
        
    }
    
    return 0;
}
