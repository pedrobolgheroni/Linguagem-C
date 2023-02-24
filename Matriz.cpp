/* Ler 20 elementos em uma matriz A tipo vetor e criar uma matriz B de mesma dimensão, 
com os mesmos elementos de A acrescentados de mais 2. 
Colocar os elementos da matriz B em ordem crescente.
Montar uma rotina de pesquisa, para pesquisar os elementos armazenados na matriz B. */

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i, j, x=0, A[20], B[20], acha;
	char numero[1][20], pesq[20], resp;
	for(i=1; i<=20; ++i)
	{
		printf("\nDigite os 20 elementos da matriz A: ");
		scanf("%i", &A[i]);
		B[i]=A[i]+2;
	}
	for (i=0;i<=20;i++)
	{
		for (j=i+1;j<=20;j++)
		{
			if (B[i]>B[j])
			{
				x=B[i];
				B[i]=B[j];
				B[j]=x;
			}
		}
	}for(j=0;j<=19;j++)
	{	
	printf("\nOs elementos da matriz B sao: %i", B[j]);
	}
		printf("\n\nPesquisa de elementos da matriz B\n\n");
	resp='s';
	while(resp=='s' || resp=='S')
	{
		printf("Entre com o elemento a ser pesquisado:  ");
		fflush(stdin); fgets(pesq,8,stdin);
		i=0;
		acha=0;
		while(i<=20 && acha == 0)
		{
			if (strcmp(pesq, numero[i])== 0)
			acha=1;
			else
			i+= 1;
			if (acha==1)
			printf("%s foi localizado na posicao %d", pesq, i+1);
			else
			printf("%s nao foi localizado!", pesq);
			printf("\n\nDeseja continuar a pesquisa? [S]IM/[N]AO + <enter> ");
			fflush(stdin); resp=getchar();
		}
	}
	getch();
	return 0;
}		
