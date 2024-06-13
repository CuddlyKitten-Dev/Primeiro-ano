#include <stdio.h>

/*Calcular o Consumo de um veículo conforme os dados informado no teclado: Tempo em horas,
velocidade média e distância*/

int main(){

float T,Vm,D,Con,Med1,Med2;

printf("Digitar o tempo gasto:\n");
scanf("%f",&T);
printf("Digitar a velociade media:\n");
scanf("%f",&Vm);

printf("Digitar a diistancia(se vc nao sabe qual eh a distancia digite 0):\n");
scanf("%f",&D);
if (D <= 0){
    D = T * Vm;
}
Med1 = D/16,3;
Med2 = D/26,9;
printf ("o consumo ficara Mais ou Menos uns %.2f Km/l \n",Con=(Med1+Med2)/2);

}
