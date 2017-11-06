 #include <stdio.h>
 
 int main ()
{
     char tweet[140];
     int tam, i,qtd=0;
     printf("entre com o texto:\n");
     scanf("%[^\n]s", tweet);
     tam = strlen(tweet);
     
     for(i=0;i<tam;i++)
     {
                       if(tweet[i]== "#")
                       {
                                     qtd++;
                       }
     }
     printf("\n numero de hashtags eh: %d\n",qtd);
     
     system("pause");
     return 0;
}
