/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() 
{
    int a=8; 
    int b=1;
    int c=0;
    
    for (;b<=6; b++) {
        for (;a>=0; a--) {
        printf("*");
        }
        
        printf("\n");
        a=8-(2*b);
        
        for (;c>=0; c--) {
        printf(" ");
        }
        c=b;
    }
    
    return 0;
}
