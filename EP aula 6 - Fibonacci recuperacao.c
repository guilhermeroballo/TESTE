#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c=0;
    int l=0;
    int s;

system("color 5B");
printf("Digite um numero: ");
scanf("%d",&l);
printf("\n** Serie Fibonacci **\n\n");

    for (s=0; s<20; s++)
    {
        c = c+l;
        l = c+l;

        if(c<1200)
            printf ("%d\n%d\n", c, l);
    }
}
