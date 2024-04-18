//Program for checking input character is vowel consonant digit or special symbol

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char a;
    scanf("%c", &a);
    
    if(a>=65 && a<=122){
       if(a==97 || a==101 || a==105 || a==111 || a==117 || a==65 || a==69 || a==73 || a==79 || a==85){
          printf("VOWEL"); 
        }else{
          printf("CONSONANT"); 
       }
    }else if(a>=48 && a<=57){
        printf("DIGIT");
    }else{
        printf("SPECIAL SYMBOL");
    }
    
    return 0;
}
