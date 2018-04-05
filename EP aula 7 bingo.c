#include<stdio.h>
#include<stdlib.h>

int main ()
{

int matriz[4][6];
int nota,aluno;
float media,somalin;
for(aluno=0;aluno<6;aluno++)
{
    for(nota=0;nota<4;nota++)
    {
       printf("Insira a nota %d do aluno %d \n",nota+1,aluno+1);
       scanf("%d",&matriz[nota][aluno]);
    }

}
for(aluno=0;aluno<6;aluno++)
{
    somalin=0;
    for(nota=0;nota<6;nota++)
    {
        somalin+=matriz[nota][aluno];
    }
    printf("\n A media do aluno %d eh %.2f", aluno,(float)somalin/4);
}
  }
