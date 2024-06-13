#include <stdio.h>

int main(){

int id,vi=0,ci=0,ps=0;

do{

    printf("Digite uma idade:\n");
    scanf(" %d",&id);
    if (id <= 21){              //Quantidade de pessoas que tem 21 anos ou menos
        vi++;
    }
    if (id < 50 && id > 21){    //Quantidade de pessoas entre 21 e 50
        id=0;
    }
    if (id >=50 && id != 99){   //Quantidade de pessoas mais de 50 anos mas diferente de 99 anos
        ci++;
        }
    ps++;                       //Quantidade de pessoas totais

}while(id != 99);               //se numero 99 aparecer o ciclo termina
printf("entre %d pessoas, tem...\nMenos de 21 : %d pessoas\nMais que 50 : %d pessoas\n",ps,vi,ci);  //mostra os dados

}
