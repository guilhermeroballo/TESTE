#include<stdio.h>
#include <stdlib.h>

int main ()

{
system("color 1E");
int i, peso, s=0, media, j=0;
for(i=1; i<=4; i++)
{
printf("Digite um peso: \n");
scanf("%d", &peso);
s=s+peso;
if(j<peso)
{
j=peso;
}
}
printf("O maior peso eh: %d", peso);
media=s/4;
printf(" media = %d", media);
}
