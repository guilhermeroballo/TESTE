#include<stdio.h>
#define MAX 20
int main ()

{
int numeros[MAX], c, fibonacci=0;
printf("Digite 20 numeros para iniciar uma serie Fibonacci: \n");

for(c=0; c<=MAX-1; c++)
{
scanf("%d", &numeros[c]);
}

printf("\nO ultimo elemento inserido foi: %d\n\n", numeros[19]);

printf("fibonacci: %d\n", numeros[0]);
printf("fibonacci: %d\n", numeros[1]);

while(fibonacci<=1200)
{
fibonacci = numeros[0] + numeros[1];
numeros[0]=numeros[1];
numeros[1]=fibonacci;
printf("fibonacci: %d\n", fibonacci);
}

}
