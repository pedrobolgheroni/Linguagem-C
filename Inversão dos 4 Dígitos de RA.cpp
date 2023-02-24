/*Descreva um programa em Linguagem C que leia o valor de um RA (número composto por 9 dígitos) 
e gere um novo RA pela inversão dos 4 dígitos menos significativos do RA inicial.
Exemplificando, se RA inicial for 972845236 então o RA novo deve ser 972846325.
Se RA inicial for 984475211 então o RA novo deve ser 984471125.
O algoritmo deve ler RA inicial e apresentar o RA novo. */


#include<stdio.h>
#include<conio.h>

int main()
{
	int i, a[9], b[9];
	printf("Digite o RA: ");
	scanf("%i", &a);
	for(i=1;i<=9;++i)
	{
		b[1]=a[1];
		b[2]=a[2];
		b[3]=a[3];
		b[4]=a[4];
		b[5]=a[5];
		b[6]=a[9];
		b[7]=a[8];
		b[8]=a[7];
		b[9]=a[6];
	 } 	
	 for(i=1;i<=9;++i)
	 printf("\nO valor do novo RA e: ", b);
	 getch();
	 return 0;
}
