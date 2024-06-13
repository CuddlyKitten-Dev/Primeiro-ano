#include <stdio.h>

/*Criar um algoritmo que leia os limites inferior e superior de um intervalo e imprimir todos os
números pares no intervalo aberto e seu somatório. Suponha que os dados digitados são para um
intervalo crescente.*/

int main() {
    int li,ls;
    float resu;

    printf("digite o limite inferior do intervalo: ");
    scanf("%d", &li);
    printf("digite o limite superior do intervalo: ");
    scanf("%d", &ls);
    printf("Numeros pares no intervalo aberto entre %d e %d:\n", li, ls);

    if (li % 2 != 0) {
        li++;
    }
    for (int i = li; i <= ls; i += 2) {
        printf("%d\n", i);
        resu += i;
    }

    printf("a soma dos numeros pares no intervalo eh %.1f \n",resu);

}
