#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int xinga(char nome[15]){
   printf("vai tomar no cu %s filha da puta",nome);
}
int main(){

char nome[15];
printf("digite um nome:\n");
scanf("%s",nome);
system("cls");
xinga(nome);
return 0;
}
