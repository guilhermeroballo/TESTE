#include <stdio.h>
#include <stdlib.h>

int menor(int *val)
{
int menor=10;
int k;

for(k=0; k<15; k++)
    {
    if(val[k]<menor)
    menor=val[k];
    }
return menor;
}



int maior(int *val)
{
int maior=0;
int f;

for(f=0; f<15; f++)
    if(val[f]>maior)
        {
        maior=val[f];
        }
return maior;
}


int maparada (int *val, int menor, int maior)
{
int media;
int contador=0;
int l=0;
int c;

for(c=0; c<15; c++)
    {
    if(val[c]!= menor)
        {
        if (val[c]!= maior)
            {
            contador = contador + val[c];
            l = l+1;
            }
        }
    }

media = contador/l;

return media;
}



main()
{

system("color 3F");

int r;
int soma=0;
int val[15];
int mxm, mnm;
float media;

printf("Digite a nota de 15 alunos para o calculo da media aparada: ");
printf("\n");
printf("\n");

for(r=0; r<15; r++)
    {
    printf("%d: ", r+1);
    scanf ("%d", &val[r]);
    }


mxm = maior(val);

mnm = menor(val);

media = maparada(val, mnm, mxm);



printf("\n");
printf("A maior nota eh: %d", mxm);
printf("\n");
printf("\n");
printf("A menor nota eh: %d", mnm);
printf("\n");
printf("\n");
printf("A media aparada eh: %.2f", media);
printf("\n");
printf("\n");
}
