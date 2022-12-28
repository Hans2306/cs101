#include <stdio.h>

int main()
{
    int a = 9;
    int b = 0;
    b = a%2;
    
    if (b == 0) {
        printf ("%d = Even\n",a);
    } else {
        printf ("%d = Odd\n",a);
    }
    
    return 0;
}
