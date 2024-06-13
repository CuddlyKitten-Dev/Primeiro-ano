#include <stdio.h>

/* Ler 2 numeros inteiros e somá-los. Se a soma for maior que 10,
mostrar o resultado da soma 27*/
int main(){

int num1,num2,resu;

printf ("Digite um numeros:\n");
scanf("%d",&num1);
printf ("Digite denovo mais um numeros:\n");
scanf("%d",&num2);
resu = num1 + num2;
if (resu >= 10){
    printf("apenas 27");
}else{
    printf("apenas %d",resu);
}
}
