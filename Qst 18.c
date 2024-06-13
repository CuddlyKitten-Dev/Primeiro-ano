#include <stdio.h>

/* Solicitar salario, e um valor de uma possível prestação de uma divida a pagar. Se prestação for
maior que 20% do salario, imprimir : Empréstimo não pode ser concedido. Se não imprimir
Empréstimo pode ser concedido. */

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

