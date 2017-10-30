#include<stdio.h>

int main ()
{
    char nome [5][20];
    float nota [5][2];
    int i;
    float media;
    
    for(i=0;i<=4;i++)
    {
                     printf("entre com o nome do aluno %d:\n", i+1);
                     scanf("%s",nome[i]);
                     
                     printf("entre com com av1 do aluno %d:\n",i+1);
                     scanf("%f", &nota[i][0]);
                     
                     printf("entre com com av2 do aluno %d:\n",i+1);
                     scanf("%f", &nota[i][1]);
    }
    
    for(i=0;i<=4;i++)
    {
                     media=(nota[i][0] + nota[i][1])/2;
                     if (media>=6)
                     {
                                  printf("\n%s aprovado", nome[i]);
                     }
                     else
                     {
                         printf("\n%s reprovado",nome[i]);
                     }
    }
    system("pause");
    return 0;
}
