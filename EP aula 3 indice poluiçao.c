#include<stdio.h>
int main()
{
float indice;
scanf("%f", &indice);
if (0<=indice && indice<0.4)
printf("\nApenas as industrias do grupo 1 serao intimadas a suspenderem as suas atividades. Indice:%0.3f\n\n", indice);
else if (0.4<=indice && indice<0.5)
printf ("\nApenas as industrias dos grupos 1 e 2 serao intimadas a suspenderem as suas atividades. Indice:%0.3f\n\n", indice);
else if (indice>=0.5)
printf ("\nAs empresas de todos os grupos devem ser notificadas a paralisarem as suas atividades. Indice:%0.3f\n\n", indice);
}
