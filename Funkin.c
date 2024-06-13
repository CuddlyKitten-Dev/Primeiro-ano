#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>


void typeText(const char *text) {
    // Loop através dos caracteres do texto
    for(int i = 0; text[i] != '\0'; i++) {
        // Converte o caractere atual para maiúscula
        char currentChar = toupper(text[i]);

        // Se for um espaço, envie a tecla de espaço diretamente
        if (currentChar == ' ') {
            keybd_event(VK_SPACE, 0, 0, 0);
            keybd_event(VK_SPACE, 0, KEYEVENTF_KEYUP, 0);
        } else {
            // Calcula o código da tecla correspondente ao caractere atual
            int keyCode = VkKeyScanA(currentChar);

            // Simula a pressão da tecla
            keybd_event(keyCode, 0, 0, 0);
            // Simula a liberação da tecla
            keybd_event(keyCode, 0, KEYEVENTF_KEYUP, 0);
        }
    }
}

int main(){

    const char *texto = "My location";

/ Comando para reproduzir o arquivo de áudio
    const char *command = "open \"Users\\rapos\\Downloads\\Inst (2).ogg\" type waveaudio alias som && play som";

    // Envia o comando para o MCI
    DWORD result = mciSendStringA(command, NULL, 0, NULL);
    if (result != 0) {
        printf("Erro ao reproduzir o arquivo de áudio.\n");
        return 1;
    }

    // Aguarda a reprodução terminar
    Sleep(5000); // 5 segundos

    // Comando para parar a reprodução e fechar o dispositivo
    const char *stopCommand = "stop som && close som";

    // Envia o comando para o MCI
    result = mciSendStringA(stopCommand, NULL, 0, NULL);
    if (result != 0) {
        printf("Erro ao parar a reprodução do arquivo de áudio.\n");
        return 1;
    }




   // Define as coordenadas para onde você quer mover o mouse
    int x = 350;
    int y = 850;

    // Move o mouse para as coordenadas especificadas
    SetCursorPos(x, y);

    // Simula um clique no botão esquerdo do mouse
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    Sleep(500);
    typeText(texto);

    return 0;

}
