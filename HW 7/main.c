#include <stdio.h>

int main() {
    int n = 7;
    int i = 1;
    int j;
    int k;
    
    for (i;i<=n;i++) {
        
        for (j=n-i;j>0;j--) {
            printf(" ");
        }
        
       for (k=1;k<=i;k++) {
       printf("%d",i);
       }
       printf("\n");
    }
    
    return 0;
}
