#include <stdio.h>

/* Solicitar salario, e um valor de uma poss�vel presta��o de uma divida a pagar. Se presta��o for
maior que 20% do salario, imprimir : Empr�stimo n�o pode ser concedido. Se n�o imprimir
Empr�stimo pode ser concedido. */

int main(){
float salar,prest,porc;
printf("digite seu salario:\n");
scanf("%f",&salar);
printf("digite o valor da prestasao de uma divida:\n");
scanf("%f",&prest);

porc = (salar/100) * 20;

if (prest >= porc){
    printf("Emprestimo nao pode ser concedido");
}else{
     printf("Emprestimo pode ser concedido");
}
}

