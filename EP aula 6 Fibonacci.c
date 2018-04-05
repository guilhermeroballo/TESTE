#include<stdio.h>
#include<stdlib.h>

int main ()
{
int m, n, fibonacci;
printf("Digite os dois valores para iniciar a serie: \n");
scanf("%d%d", &m, &n);

while(fibonacci<=1200)
{
fibonacci = m + n;
m=n;
n=fibonacci;
printf("%d\n", fibonacci);
}
return 2;
}
