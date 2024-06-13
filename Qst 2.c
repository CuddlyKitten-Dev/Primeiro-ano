#include <stdio.h>

/*Receber um nome no teclado e imprimi-lo dez vezes.*/

int main(){

int v[46],vez = 1;

printf ("escreva uma palavra e eu vou duplica-la\n");
scanf("%s",v);

while (vez <= 10){
    printf ("%d  %s \n",vez ,v);
    vez++;
}
}
