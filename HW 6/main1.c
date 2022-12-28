#include <stdio.h>

int main() {
    int a = 10;
    
    if (a%15 == 0) {
        printf ("Love IU\n");
    } else if (a%5 == 0) {
        printf ("IU\n");
    } else if (a%3 == 0) {
        printf ("Love\n");
    } else {
        printf ("%d\n",a);
    }
    
    return 0;
}
