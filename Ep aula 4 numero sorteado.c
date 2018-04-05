#include<stdio.h>

int main ()

{
int numero = 7;
printf("\nInsira um numero inteiro de 0 a 10: ");
scanf ("%d", &numero);

while (numero != 7)

{

switch (numero)

{

case 0:
printf("\nEsta longe, o numero eh maior.\n\n");
scanf ("%d", &numero);
break;

case 1:
printf("\nEsta longe, o numero eh maior.\n\n");
scanf ("%d", &numero);
break;

case 2:
printf("\nEsta longe, o numero eh maior.\n\n");
scanf ("%d", &numero);
break;

case 3:
printf("\nEsta longe, o numero eh maior.\n\n");
scanf ("%d", &numero);
break;

case 4:
printf("\nEsta longe, o numero eh maior.\n\n");
scanf ("%d", &numero);
break;

case 5:
printf("\nEsta perto, o numero eh maior.\n\n");
scanf ("%d", &numero);
break;

case 6:
printf("\nEsta perto, o numero eh maior.\n\n");
scanf ("%d", &numero);
break;

case 8:
printf("\nEsta perto, o numero eh menor.\n\n");
scanf ("%d", &numero);
break;

case 9:
printf("\nEsta perto, o numero eh menor.\n\n");
scanf ("%d", &numero);
break;

case 10:
printf("\nEsta longe, o numero eh menor.\n\n");
scanf ("%d", &numero);
break;

default :
printf ("\nNumero invalido!! Digite um numero de 0 a 10.\n\n");
scanf ("%d", &numero);

}

}

printf("\n\nParabens! Voce acertou! O numero sorteado eh 7.\n\n");

}
