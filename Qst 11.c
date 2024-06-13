#include <stdio.h>

/* Cálculo de um salario líquido de um professor . Serão fornecidos
valor da hora aula, numero de aulas dadas e o % de desconto do INSS. */

int main(){
float saliq,vha,numA,des,salbr,desinss;

printf ("digite o valor da hora por aula:\n");
scanf("%f",&vha);
printf ("digite o numero de aulas ja dadas:\n");
scanf("%f",&numA);
printf ("digite o valor em %% do desconto do INSS:\n");
scanf("%f",&des);

salbr = vha * numA;
desinss = salbr * (des/100);

printf ("o Salario liquido eh R$%.2f",saliq=salbr-desinss);
}
