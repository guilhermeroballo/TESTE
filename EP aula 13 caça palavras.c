#include <stdio.h>
#include <string.h>
main()
{
int c=0;
char plv[20], *ret;
char ln[100];
FILE *arq;

arq=fopen("EP13A.txt","r");

printf("Digite uma palavra de ate 20 letras: \n");
printf("\n");

fflush(stdin);
gets(plv);

while( fgets(ln,99, arq) != NULL)
{
c++;

ret=strstr(ln,plv);

if(ret!=0)
    {
    printf("\n\n");
    printf("** A palavra esta na linha %d\n\n",c);
    printf("** A frase na qual esta palavra se encontra eh: \n %s", ln);
    printf("\n\n\n");
    }

}

fclose(arq);

}
