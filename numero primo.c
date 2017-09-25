#include <stdio.h>

int main ()
{
    int num, i;
    do
    {
        printf("entre com um numero inteiro e positivo:");
        scanf("%d",&num);
    }
    while(num<0);
    for (i=1;i<=num;i++)
    {
        if(num%i==0)
        {
                    printf("o numero nao eh primo");
        }
        else
        {
            printf("o numero eh primo");
        }
    }
    system ("pause");
    return 0;
}
