#include<stdio.h>
#include<string.h>

int main ()
{
    char nome[20];
    int i,j=0,tam,palindromo=1;
    printf("\ndigite o nome:\n");
    scanf ("%s", nome);
    tam = strlen(nome);
    printf("o nome na ordem reversa eh:");
    for(i=tam-1; i>=0; i--)
    {
               printf("%c", nome[i]);
               if(nome[i] != nome [j])
               {
                          palindromo = 0;
               }
               j++;
    }
    if(palindromo==1)
    {
                  printf("\nesta palavra eh um palindromo");   
    }
    else
    {
        printf("\nessa palavra nao eh um palindromo");
    }
    printf("\n\n");
    
    system ("pause");
    return 0;
}
