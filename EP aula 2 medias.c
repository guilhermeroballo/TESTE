#include<stdio.h>
int main ()
{
float P1, P2, P3, P4, MS1, MS2, MF;
scanf ("%f%f%f%f", &P1, &P2, &P3, &P4);
MS1=(P1+P2)/2;
MS2=(P3+P4)/2;
MF=(P1+P2+P3+P4)/4;
printf("Media Primeiro Semestre:%.2f\n\n", MS1);
printf("Media Segundo Semestre:%.2f\n\n", MS2);
printf("Media Final:%.2f\n\n", MF);
}
