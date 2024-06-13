#include <stdio.h>

/* Calcule e imprima o valor em reais de cada kw o valor em reais a ser pago o novo valor a ser
pago por essa residencia com um desconto de 10%. Dado: 100 kilowatts custa 1/7 do salario
mínimo. quantidade de kw gasto por residencia */

#define Salmin 1412

int main(){

float salmini,cemkw,vkw,vsp,kwg,vspd;

printf("Digite seu salario:\n");

scanf("%f",&salmini);

cemkw = salmini/7;
vkw=cemkw/100;

printf("Digite kw gastos:\n");

scanf("%f",&kwg);

vsp = vkw * kwg;

printf ("o valor a ser pago sera R$%.2f , e com 10 de desconto sera R$%.2f",vsp,vspd = vsp-((vsp/100)*10));

}

