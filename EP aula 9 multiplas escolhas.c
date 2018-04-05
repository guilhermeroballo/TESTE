#include<stdio.h>
#include<stdlib.h>

float somar(void)

{
float c=1;
float sm=0;

printf("\n\nDigite os numeros para efetuar a soma, digite 0 quando desejar parar.\n\n");

while(c!=0){
scanf("%f", &c);
sm=sm+c;
}
printf("\n** O resultado da soma eh: %.2f \n\n", sm);
}



float multiplicar(void)

{
float l=1;
float prdt=1;

printf("\n\nDigite os numeros para efetuar a multiplicacao, digite 0 quando desejar parar.\n\n");

while(l!=0){
scanf("%f", &l);
if(l!=0)
prdt=prdt*l;
}
printf("\n** O resultado da multiplicacao eh: %.2f \n\n", prdt);
}



int main()
{
system("color 3F");

char m;

do
{
printf("Digite 's' para somar ou 'p' para fazer uma multiplicacao:\n");
scanf("%c", &m);
} while(m!='s' && m!='p' && m!='e');

if(m=='p')
multiplicar();

if(m=='s')
somar();
}
