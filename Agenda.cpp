/* Considerando o cadastro de uma agenda de endereços, nomes e telefones de 5 pessoas, 
defina a estrutura de registro apropriada e as codificações de um programa que efetuem as seguintes tarefas:
 a- o cadastramento das informações: nome, endereço, e-mail e telefone.
 b- a pesquisa dos nomes.
 c- a classificação por ordem alfabética 
 d- a alteração de algum registro que tenha sido fornecido com erro. 
 e- a remoção de elementos cadastrados. */

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int i, resp, alt, acha, j;
char pesq[90], aux[90];
int cadastro();
int pesquisa();
int classificacao();
int alteracao();
int remocao();
int saida();

struct rgtr
	{
		char nome[90];
		char endereco[120];
		int idade;
		int tel;
	};
	struct rgtr z[5];
int main()
{
	resp=0;
	while(resp<=6)
	{
		printf("\nSelecione a opcao desejada: \n");
		printf("\n1- Cadastro E Registros\n\n2- Pesquisa de Registro\n\n3- Classificacao alfabetica\n\n4- Alteracao de Registro\n\n5- Remocao de Registro\n\n6-Sair\n\n");
		scanf("%i", &resp);
		switch (resp)
		{
			case 1: cadastro(); break;
			case 2: pesquisa(); break;
			case 3: classificacao(); break;
			case 4: alteracao(); break;
			case 5: remocao(); break;
			case 6: saida(); break; 
			default: printf("Opcao invalida!");
		}
	}
	getch();
	return 0;
}
int cadastro()
{
	for (i=0; i<=5; i=i+1)
					{
						printf("\nDigite o nome: ");
						fflush(stdin);
						fgets(z[i].nome,90,stdin);
						printf("\nDigite o endereco: ");
						fflush(stdin);
						fgets(z[i].endereco,120,stdin);
						printf("\nDigite a idade: ");
						scanf("%i", &z[i].idade);
						printf("\nDigite o telefone: ");
						scanf("%i", &z[i].tel);
					}
}
int pesquisa()
{
	printf("Digite o nome para realizar a pesquisa: ");
	fflush(stdin);
	fgets(pesq,90,stdin);
	i=0;
	acha=0;
	while (i<=6 && acha==0)
	{
		if(strcmp(z[i].nome,pesq)==0)
		acha=1;
		else
		i=i+1;
	}	
		if (acha==1)
		{
			printf("\nNome encontrada na posicao %i", i+1);
			printf("\nDados:\n");
			puts(z[i].endereco);
			printf("%i", z[i].tel);
			printf("%i anos",z[i].idade);
		}
		else
		printf("\nNome nao encontrado");
}	
int classificacao()
{
	printf("\nOrdenacao:\n\n");
				for(i=0;i<=5;i=i+1)
				for(j=i+1;j<=5;j=j+1)
				{
					if(strcmp(z[i].nome,z[j].nome)>0)
					{
						strcpy(aux,z[i].nome);
						strcpy(z[i].nome,z[j].nome);
						strcpy(z[j].nome,aux);
					}
				}
				for(i=0;i<=5;i=i+1)
				puts(z[i].nome);	
}		
int alteracao() 
{
	printf("Entre com o nome para realizar a alteracao: ");
				fflush(stdin);
				fgets(pesq,90,stdin);
				i=0;
				acha=0;
				while(i<=4 && acha==0)
				{
					if(strcmp(z[i].nome,pesq)==0)
					acha=1;
					else
					i=i+1;
				}
				if (acha==1)
				{
					printf("\nNome encontrado na posicao %i\n", i+1);
					printf("\nDados: \n\n");
					puts(z[i].endereco);
					printf("\nidade: %i anos", z[i].idade);
					printf("\ntelefone: %i", z[i].tel);
					printf("\nEntre com o dado que deseja alterar (1- nome, 2- idade, 3- endereco, 4- telefone): ");
					scanf("%i", &alt);
					switch(alt)
					{
						case 1:
							{
								printf("\nDigite o novo nome: ");
								fflush(stdin);
								fgets(z[i].nome,90,stdin);
								printf("\nAlteracao realizada com sucesso\n\n ");
							}
							break;
							case 2:
								{
									printf("\nDigite a nova idade: ");
									scanf("%i", &z[i].idade);
									printf("\nAlteracao realizada com sucesso\n\n ");
								}
								break;
							case 3:	
								{
									printf("\nDigite o novo endereco: ");
									fflush(stdin);
									fgets(z[i].endereco,120,stdin);
									printf("\nAlteracao realizada com sucesso\n\n ");
								}
								break;
							case 4:
							{
								printf("\nDigite o novo telefone: ");
								scanf("%i", &z[i].tel);
								printf("\nAlteracao realizada com sucesso\n\n ");
							}	
								break;
							default: printf("\nCampo invalido ");	
					}
				}
				else
				printf("\nNome nao encontrado ");
}		
int remocao()
{
	printf("Digite o nome para realizar a remocao do registro: ");
	fflush(stdin);
	fgets(pesq,90,stdin);
	i=0;
	acha=0;
	while(i<=5 && acha==0)
	{
		if (strcmp(z[i].nome, pesq)==0)
		acha=1;
		else
		i=i+1;
	}
	if (acha==1)
	{
		printf("\nNome enocntradado na posicao %i", i+1);
		printf("\nDados:\n");
		puts(z[i].endereco);
		printf("%i anos",z[i].idade);
		printf("%i",z[i].tel);
		printf("\nQual dado deseja remover? (1-nome, 2-idade, 3-endereco, 4-telefone)");
		scanf("%i", &alt);
		switch(alt)
		{
			case 1:
				{
				strcpy(z[i].nome," ");
				printf("\nDelecao efetuada com sucesso");
				}
				break;
			case 2: 
				{
				z[i].idade=0;
				printf("Delecao efetuada com sucesso");
				}	
				break;
			case 3:
				{
				strcpy(z[i].endereco," ");
				printf("Delecao efetuada com sucesso");
				}	
				break;
			case 4:
				{
				z[i].tel=0;
				printf("Delecao efetuada com sucesso");
				}	
				break;
			default: printf("Opcao invalida");	
			}	
	}	
}
int saida()
{
	exit(0);
}

