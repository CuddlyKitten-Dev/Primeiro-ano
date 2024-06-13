#include <stdio.h>

/*Ler uma temperatura em graus Celsius e transformá-la em graus Fahrenheit.*/

/*F = celsio vezes nove dividido por 5 mais 32*/
int main(){
int num1;

float resu;

printf("TEMPERATURA EM CELSIUS PARA F\n");

printf("DIGITE A TEMPERATURA!\n");

scanf("%d",&num1);


resu = (num1 * 9/5) + 32;

printf("o resultado da covercao eh %.2f",resu);

}
