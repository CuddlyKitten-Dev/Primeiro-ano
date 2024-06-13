#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main() {
    int n,m=1;                       //Controlador de colunas
    setlocale(LC_ALL,"portuguese");
    int j,g=0;
    printf("Digite A quantidade de alunos da sala: ");
    scanf(" %d",&n);
    char str[n][100];

    for(j=0;j<n;j++){
    printf("Digite um Nome de um Aluno: ");
    scanf("%99s", str[j]);          // Lê uma string com no máximo 99 caracteres
    }
    printf("\n");
for(int b=65;b<=122;b++){           //passando por todas as letras
for(int i=0;i<n;i++){               //passando pelas colunas
    if (toupper(str[i][0]== b)){
        printf("%d : %s \n",m,str[i]);
        m++;
    }

}

}
    int k;
    scanf("%d",&k);
    return 0;
}
