#include <stdio.h>
#include <math.h> // para usar uma funçao que encontrei na internet que faz a raiz quadrada

/*Ler 1 número. Se positivo, imprimir raiz quadrada se não o quadrado. */

int main(){
int num;
float resu;
printf("digite um numero que possa ser positivo ou nao:\n");
scanf("%d",&num);

    if (num >= 1){
    resu = sqrt(num);
    printf("a raiz deste numero eh %.2f",resu);
}

    if (num <= -1){
    resu = num * num;
    printf("o quadrado deste numero eh %.2f",resu);
}

    if (num == 0){
    printf("0 nao tem raiz e nem quadrado,sorry");
}

return 0;
}
