#include <stdio.h>
#include <time.h>

/*Ler um ano de nascimento e ano atual. Imprimir a idade da pessoa.*/
/*e maquina de dar parabens no seu aniversario*/

int main(){
int anonas,mesnas,dianas,idade,mesa,diaa,mesf,diaf;
time_t segundos;
    time(&segundos);
    struct tm *data_hora_atual;
    data_hora_atual = localtime(&segundos);

    mesa = data_hora_atual->tm_mon + 1;
    diaa = data_hora_atual->tm_mday;

    printf("digite o ano que voce nasceu:\n");
    scanf("%d",&anonas);
    printf("digite o mes que voce nasceu:\n");
    scanf("%d",&mesnas);
    printf("digite o dia que voce nasceu:\n");
    scanf("%d",&dianas);

    idade = (data_hora_atual->tm_year + 1900) - anonas;

    if (mesnas > mesa){ //verifica o mes e dia se passou ou nao seu aniversario
        idade = idade - 1;
    }
    if (mesnas == mesa){
        if (dianas > diaa){
            idade = idade - 1;
            if (dianas == diaa){
                printf ("FELIZ ANIVERSARIO ,PARABENS PELOS SEU %d ANOS",idade);
            }
        }
    }

    mesf = mesnas - mesa;
    diaf = dianas - diaa;
    if (mesf < 0){
        mesf += 12;
    }

    printf ("\nVoce tem %d anos,mas falta %d meses e %d dias",idade,mesf,diaf);

}
