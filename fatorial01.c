#include <stdio.h>

int main ( )
{
    int n;
    int i;
    int fat;
    do{
       printf("\ndigite um numero n:");
       scanf("%d", &n);
       }
       while (n<=0);
       fat = 1;
    for (i=n;i>=1;i--)
    {
        fat = fat*i;
    }
    printf ("\no fatorial = %d", fat);
    system ("pause");
    return 0;
}
