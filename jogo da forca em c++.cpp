#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
	char palavras[5][20]={"programacao","computador","teclado","mouse","microfone"};
	//int index=rand()%5;
	for(int index=0;index<5;index++)
	{
			
		int acertos =0;
		bool cabeca,pernas, corpo, braco, achou;
		cabeca = false;
		pernas = false;
		corpo = false;
		braco = false;
		achou = false;
		printf("%d %d\n", index, rand());
		int tam, i,j, iLetraCur;
		printf("%s\n",palavras[index]);
		tam = strlen(palavras[index]);
		for(i=0;i<tam;i++)
		{
			printf(" _ ");
		}
		printf("           ------------|");
	//	printf("entre com uma letra:\n");
	//	scanf("%c", &letra);
		j=2;
		while(acertos<tam)
		{
			printf("\nentre com uma letra:\n");
			char letra;
			scanf(" %c", &letra);
	
			for(i=0;i<tam;i++)
			{
				if (letra==palavras[index][i])
				{
					acertos++;
					iLetraCur = i;
					achou = true;
				}					
			}
			if (achou == false)			
			{
				if(cabeca == false && pernas == false && corpo ==false && braco ==false)
				{
					cabeca = true;
				}
				else if(cabeca == true && pernas == false && corpo ==false && braco ==false)
				{
					braco = true;
				}
				else if(cabeca == true&& pernas == false && corpo ==false && braco ==true)
				{
					corpo = true;
				}
				else if(cabeca == true && pernas == false && corpo ==true && braco ==true)
				{
					pernas = true;
				}
			}
			printf("\n");
			for(i=0;i<tam;i++)
			{
				if(i == iLetraCur )
				{
					printf("%c", palavras[index][i]);
				}
				else
				{
					printf(" _ ");
				}
			}
			if(cabeca == false&& pernas == false&& corpo ==false&& braco ==false)
			{
				printf("\n\n         ------------|");
			}
			else if(cabeca == true&& pernas == false&& corpo ==false&& braco ==false)
			{
				printf("\n\n         ------------|\n");
				printf("                     O");
			}
			else if(cabeca == true&& pernas == false&& corpo ==false&& braco ==true)
			{
				printf("\n\n         ------------|\n");
				printf("                     O\n");
				printf("                    /\ \n");
			}
			else if(cabeca == true&& pernas == false&& corpo ==true&& braco ==true)
			{
				printf("\n\n         ------------|\n");
				printf("                     O\n");
				printf("                    /\ \n");
				printf("                     |");
			}
			else if(cabeca == true&& pernas == true&& corpo ==true&& braco ==true)
			{
				printf("\n\n         ------------|\n");
				printf("                     O\n");
				printf("                    /\ \n");
				printf("                     |\n");
				printf("                    /\ \n");
				printf("\n\nGAME OVER\n");
				return 0;
				
			}
			printf("acertos = %d tam palavras =%d",acertos,tam);
			achou = false;
		}
		printf("\n\nPARABENS");
	}
	return 0;
}
