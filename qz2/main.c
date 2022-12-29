#include <stdio.h>

int main() 
{
    int a=9; //stars
    int b=1; //rows
    int c=0; //space
    
    for (;b<=6; b++) {
        for (;a>=1; a--) {
        printf("*");
        }
        
        printf("\n");
        a=9-(2*b);
        
        for (;c>=0; c--) {
        printf(" ");
        }
        c=b;
    }
    
    return 0;
}
