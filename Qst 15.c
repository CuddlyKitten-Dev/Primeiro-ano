#include <stdio.h>

/* Ler 2 números inteiros e somá-los. Se a soma for maior que 10, mostrar o resultado da soma.
*/
int main(){
int num1,num2,resu;
printf("Digite um numero:\n");
scanf("%d",&num1);
printf("Digite um numero diferente:\n");
scanf("%d",&num2);
resu = num1 + num2;
if (resu >= 10){
    printf ("resultado da soma eh %d",resu);
}else{
    printf ("resultado da soma nao correspodente aos requesitos");
    }
}
