#include<stdio.h>
#include<math.h>

int main ()
{
 	float 1termo, razao;
 	int n, resposta;
 	do
 	{
	  	printf("entre com o primeiro termo da pg:\n");
	  	scanf("%f", &1termo);
	  	
	  	 printf("entre com a razao da pg:\n");
	  	 scanf("%f", &razao); 
	  	 
	  	 printf("escolha qual termo da pg voce deseja calcular:\n");
	  	 scanf("%d", &n);
	  	 
	  	 printf("o %d termo da pg eh igual a %.2f(%.2f)^%d-1=%.2f",n, 1termo, razao, n, (1termo)(pow(razao, n-1)));
	  	 
	  	 printf("voce deseja calcular o termo geral de mais alguma pg? 1-sim 2-nao");
	  	 scanf("%d",&resposta);
		 }
		 while(resposta==1)
		 if(resporta==2)
		 print ("-------------fim-----------");
		 system("pause");
		 return 0;
		 }
