#include <stdio.h>

/*Ler um numero e se for maior que 20 imprimir a metade desse numero.*/

int main(){
float num;
printf("digite um numero:\n");
scanf("%f",&num);
if (num >= 20){
    printf ("seu numero mas na metade esta aqui olhe : %.1f",num/2);
}else{
    printf("seu numero eh : %.1f",num);
    }
}

