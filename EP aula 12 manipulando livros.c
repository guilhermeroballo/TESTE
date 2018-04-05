#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXI 10

struct livro
{
char nome[15], escritor[20], escola[10];
int codigo;
float valor;
};
struct livro k[MAXI];

void registra(m,n)
{
printf("\n");
printf("\nDigite o titulo do livro %d ", n);
gets(k[m].nome);
printf("\n");
printf("Digite o nome do autor do livro %d ", n);
gets(k[m].escritor);
printf("\n");
printf("Digite o estilo do livro %d ", n);
gets(k[m].escola);
printf("\n");
printf("Digite o codigo do livro %d ", n);
scanf("%d",&k[m].codigo);
printf("\n");
printf("Digite o preco do livro %d ", n);
scanf("%f",&k[m].valor);
printf("\n");
}

void informa(m,n)
{
printf("\nLIVRO %d:\n", n);
printf("** TITULO: %s\n", k[m].nome);
printf("** AUTOR: %s\n", k[m].escritor);
printf("** ESTILO: %s\n", k[m].escola);
printf("** CODIGO: %d\n", k[m].codigo);
printf("** VALOR: %.2f\n", k[m].valor);
printf("\n\n");
}

int main()
{
int j, s;

printf("\t\t**********************\n");
printf("\t\t* MANIPULANDO LIVROS *\n");
printf("\t\t**********************\n");

for(j=0, s=1; j<MAXI; j++, s++)
{
fflush(stdin);
registra(j,s);
}
for(j=0, s=1; j<MAXI; j++, s++)
informa(j,s);
}
