#include <stdio.h>

/*Informar um saldo e imprimir o saldo com reajuste de 1%*/

int main(){
float sald,resu;

printf ("Digite um saldo que e direi ele com um porcento a mais\n");
scanf("%f",&sald);
printf ("o saldo reajustado eh %.2f",resu= ((sald/100)*1)+sald);
}
