#include<stdio.h>
int main()
{
float A1, A2, A3, soma;
scanf("%f%f%f", &A1, &A2, &A3);
if (A1<=1.5 && A2>1.51 && A3>1.51)
printf("\nApenas 1 pessoa mede menos que 1.5 metro e outras 2 pessoas medem mais que 1.5 metro\n");
else if (A1>1.51 && A2<=1.5 && A3>1.51)
printf("\nApenas 1 pessoa mede menos que 1.5  e outras 2 pessoas medem mais que 1.5 metro\n");
else if (A1>1.51 && A2>1.51 && A3<=1.5)
printf("\nApenas 1 pessoa mede menos que 1.5 metro e outras 2 pessoas medem mais que 1.5 metro\n");
else if (A1<=1.5 && A2<=1.50 && A3>1.51)
printf("\nApenas 2 pessoas medem menos que 1.5 metro e outra 1 pessoa mede mais que 1.5 metro\n");
else if (A1<=1.5 && A2>1.51 && A3<=1.5)
printf("\nApenas 2 pessoas medem menos que 1.5 metro e outra 1 pessoa mede mais que 1.5 metro\n");
else if (A1>1.51 && A2<=1.5 && A3<=1.5)
printf("\nApenas 2 pessoas medem menos que 1.5 metro e outra 1 pessoa mede mais que 1.5 metro\n");
else if (A1<=1.5 && A2<=1.5 && A3<=1.5)
printf ("\nAs 3 pessoas medem menos que 1.5 metro\n");
else if (A1>1.51 && A2>1.51 && A3>1.5)
printf("\nAs 3 pessoas medem mais que 1.5 metro\n");
soma=(A1+A2+A3)/3;
if (soma<1.5)
printf("\nMedia inferior a 1.5 metro e igual a: %0.2f\n\n", soma);
else if (soma>1.5)
printf("\nMedia superior a 1.5 metro e igual a: %0.2f\n\n", soma);
else if (soma=1.5)
printf("\nMedia igual a 1.5 metro\n\n");
}
