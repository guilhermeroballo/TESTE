#include<stdio.h>

int main ()

{
int c, l, s, d =0 ;
printf ("\nDigite um numero maior do que 1: ");
scanf ("%d", &c);

while (c<1)
{
printf ("\nErrado! Digite um numero maior do que 1: ");
scanf("%d", &c);
}

if (c%2 == 0)
s = c / 2;

else
s = (c - 1)/2;

while (l <= s)
{
if (c % l ==0)
d = 1;
l++;
}

if (d == 0)
printf("\n O numero %d eh primo\n\n", c);

else
printf("\n O numero %d nao eh primo\n\n", c);


}
