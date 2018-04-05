#include<stdio.h>
int main ()
{
float x, y;
scanf ("%f%f", &x, &y);
if (x>0.0 && y>0.0)
printf("\nO ponto esta no primeiro quadrante\n\n");
else if (x>0.0 && y<0.0)
printf("\nO ponto esta no segundo qudrante\n\n");
else if (x==0.0 && y>0.0)
printf("\nO ponto esta sobre o eixo y\n\n");
else if (x==0.0 && y<0.0)
printf("\nO ponto esta sobre o eixo y\n\n");
else if (x>0.0 && y==0.0)
printf("\nO ponto esta sobre o eixo x\n\n");
else if (x<0.0 && y==0.0)
printf("\nO ponto esta sobre o eixo x\n\n");
else if (x<0.0 && y>0.0)
printf("\nO ponto esta no quarto quadrante\n\n");
else if (x<0.0 && y<0.0)
printf("\nO ponto esta no terceiro quadrante\n\n");
else if (x==0.0 && y==0.0)
printf("\nO ponto esta na origem\n\n");
}
