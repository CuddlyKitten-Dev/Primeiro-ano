#include <stdio.h>

/*Ler um numero e imprimir: maior que 20, igual a 20 ou menor que 20. */

int main(){

int num,esc;

printf ("Digite um numero de 0 a 100:\n");
scanf("%d",&num);
printf ("agora voce acha que eh maior ,igual ou menor do que eu estou pensando\n");
printf ("(1)maior\n");
printf ("(2)igual\n");
printf ("(3)menor\n");
scanf("%d",&esc);
switch (esc){
    case 1:
        if (num == 20){
    printf("ERROUUuu,um pouco mais baixo o numero");
}
        if (num < 20){
    printf("ERROUUuu,um pouco mais alto o numero");
}
        if (num > 20){
    printf("PARABENS,mas dai eh muito facil");
}
    break;

    case 2:
        if (num == 20){
    printf("PARABENS,voce acertou,qual eh as chances de voce ter colocado 20");
}
        if (num < 20){
    printf("ERROUUuu,um pouco mais alto o numero");
}
        if (num > 20){
    printf("ERROUUuu,um pouco mais baixo o numero");
}
    break;

    case 3:
        if (num == 20){
    printf("ERROUUuu,um pouco mais alto o numero");
}
        if (num < 20){
    printf("PARABENS,dai eh facil ne");
}
        if (num > 20){
    printf("ERROUUuu,um pouco mais alto o numero");
}
break;
}
}
