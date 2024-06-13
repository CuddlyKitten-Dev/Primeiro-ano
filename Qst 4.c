#include <stdio.h>

/*Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%*/

int main(){

float num,resu;

printf("digite um valor que eu direi a voce esse mesmo valor com 10%% a mais \n");
scanf("%f",&num);
printf("o valor agora seria %.2f ",resu = ((num/100) * 10) + num);
}
