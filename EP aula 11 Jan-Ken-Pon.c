#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int jogada()
{
int opcao;
printf("Digite 1 para pedra, 2 para papel e 3 para tesoura: \n");
scanf("%d",&opcao);
if(opcao>=1&&opcao<=3){
printf("\n");
printf("**Jogada valida**\n");
return(opcao);
}
else{
printf("\n");
printf("**Jogada invalida**\n\n");
jogada(); }

}

int mostrajogada(int opcao)
{
int objeto;
objeto=opcao;

if(objeto==1)
    printf("Sua escolha foi pedra.\n");

if(objeto==2)
    printf("Sua escolha foi papel.\n");

if(objeto==3)
printf("Sua escolha foi tesoura.\n");
}

int computador()
{
int note;
srand(time(NULL));
note=rand()%3+1;

printf("\nA jogada do computador foi: %d",note);

if(note==1)
    printf(" pedra.\n\n");

if(note==2)
    printf(" papel.\n\n");

if(note==3)
    printf(" tesoura.\n\n");

return (note);
}

int teste( int opcao, int note)
{
int resposta, l, s;
l=opcao;
s=note;
if(l==1&&s==2)
    {
    printf("\nPapel cobre pedra,\n\n");
    resposta=3;
    return (3);
    }

if(l==1&&s==3)
    {
    printf("\nPedra amassa tesoura\n\n");
    resposta=2;
    return (2);
    }

if(l==1&&s==1)
    {
    printf("\nPedra contra pedra\n\n");
    resposta=1;
    return (1);
    }

if(l==2&&s==1)
    {
    printf("\nPapel cobre pedra\n\n");
    resposta=2;
    return (2);
    }

if(l==2&&s==2)
    {
    printf("\nPapel contra papel\n\n");
    resposta=1;
    return (1);
    }

if(l==2&&s==3)
    {
    printf("\nTesoura corta papel\n\n");
    resposta=3;
    return (3);
    }

if(l==3&&s==1)
    {
    printf("\nPedra amassa tesoura\n\n");
    resposta=3;
    return (3);
    }

if(l==3&&s==2)
    {
    printf("\nTesoura corta papel\n\n");
    resposta=2;
    return (2);
    }

if(l==3&s==3)
    {
    printf("\nTesoura contra tesoura\n\n");
    resposta=1;
    return (1);
    }

}

main()
{
int resultado,l,s;
int opcao, resposta, note;

l=jogada();
s=computador();
mostrajogada(l);
resultado=teste(l, s);

if(resultado==1)
    {
    printf("** O jogo empatou. Tente novamente.\n\n\n\n");
    main();
    }

if(resultado==2)
    printf("** Parabens! Voce venceu.\n\n");

if(resultado==3)
    printf("** Vitoria do computador.\n\n");

}
