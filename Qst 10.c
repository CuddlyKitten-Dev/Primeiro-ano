#include  <stdio.h>

/*Informar um preço de um produto e calcular novo preço com desconto de 9%*/

int main(){

float vprod,nvp,des;

printf ("digite o valor do produto:\n");
scanf("%f",&vprod);
des = (vprod/100)*9;
printf ("o valor do produto com 9%% de desconto eh %.2f",nvp= vprod-des);
if (nvp <= 0){
    printf("\nO PRODUTO ESTA DE GRAsA");
    }
}
