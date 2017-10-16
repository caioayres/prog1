#include<stdio.h>
#include <string.h>

int main ()
{
    char nome[20];
    int tam, i;
    
    printf ("qual o seu nome:");
    scanf("%s", nome);
    
    tam=strlen(nome);
    
    printf("\nboa noite %s\n", nome);
    printf("o seu nome tem %d caracteres\n", tam);
    
    for (i=1;i<=tam;i++)
    {
        printf("\nA %d letra eh %c\n", i, nome[i-1]);
    }
    
    system ("pause");
    return 0;    
}
