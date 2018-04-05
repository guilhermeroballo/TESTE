#include<stdio.h>
#include <stdlib.h>

int main ()

{
system("color 1E");
int idade, i, soma=0, menor, media, valor=120;
for (i=1; i<=4; i++)
{
printf("escreva uma idade: ");
scanf("%d", &idade);
soma=soma+idade;
if(valor>idade)
{
valor=idade;
}
printf("menor valor eh: %d\n\n", valor);
media = soma/4;
printf("media = %d", media);

}
}
