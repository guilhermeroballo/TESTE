#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define MAX 10

int main(void)

{

system("color 3F");

int c[MAX];
int m=0;
int l, s;

printf("\t\t\t***************\n");
printf("\t\t\t* BUBBLE SORT *\n");
printf("\t\t\t***************");

printf("\n\n\n");

srand(time(NULL));
    printf("\t\tVALORES ESCOLHIDOS PELO COMPUTADOR:");

printf("\n\n");

for(l=0; l<MAX; l++)
    c[l] = rand()%41+10;

for(l=0; l<MAX; l++)
    printf("%d\t",c[l]);


printf("\n\n\n");


while(m==0)

{
    m=1;

    for (l=0; l<MAX-1; l++)
        if (c[l] < c[l+1])
            {

            s = c[l];
            c[l] = c[l+1];
            c[l+1] = s;
            m = 0;

            }
}


printf("\t\tORDEM DECRESCENTE DOS VALORES:");

printf("\n\n");

for(l=0; l<MAX; l++)
    printf("%d\t", c[l]);

printf("\n\n\n");

system("pause");

}
