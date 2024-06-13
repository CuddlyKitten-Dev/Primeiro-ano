#include <stdio.h>
#include <stdlib.h>

int main() {
    // Use o comando adb para obter informações sobre o dispositivo Android
    FILE *fp = popen("adb shell getprop", "r");
    if (fp == NULL) {
        fprintf(stderr, "Erro ao abrir o pipe para o adb\n");
        return 1;
    }

    // Leia a saída do comando adb
    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Feche o pipe
    pclose(fp);

    return 0;
}
