#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>


void typeText(const char *text) {
    // Loop atrav�s dos caracteres do texto
    for(int i = 0; text[i] != '\0'; i++) {
        // Converte o caractere atual para mai�scula
        char currentChar = toupper(text[i]);

        // Se for um espa�o, envie a tecla de espa�o diretamente
        if (currentChar == ' ') {
            keybd_event(VK_SPACE, 0, 0, 0);
            keybd_event(VK_SPACE, 0, KEYEVENTF_KEYUP, 0);
        } else {
            // Calcula o c�digo da tecla correspondente ao caractere atual
            int keyCode = VkKeyScanA(currentChar);

            // Simula a press�o da tecla
            keybd_event(keyCode, 0, 0, 0);
            // Simula a libera��o da tecla
            keybd_event(keyCode, 0, KEYEVENTF_KEYUP, 0);
        }
    }
}

int main(){

    const char *texto = "My location";

/ Comando para reproduzir o arquivo de �udio
    const char *command = "open \"Users\\rapos\\Downloads\\Inst (2).ogg\" type waveaudio alias som && play som";

    // Envia o comando para o MCI
    DWORD result = mciSendStringA(command, NULL, 0, NULL);
    if (result != 0) {
        printf("Erro ao reproduzir o arquivo de �udio.\n");
        return 1;
    }

    // Aguarda a reprodu��o terminar
    Sleep(5000); // 5 segundos

    // Comando para parar a reprodu��o e fechar o dispositivo
    const char *stopCommand = "stop som && close som";

    // Envia o comando para o MCI
    result = mciSendStringA(stopCommand, NULL, 0, NULL);
    if (result != 0) {
        printf("Erro ao parar a reprodu��o do arquivo de �udio.\n");
        return 1;
    }




   // Define as coordenadas para onde voc� quer mover o mouse
    int x = 350;
    int y = 850;

    // Move o mouse para as coordenadas especificadas
    SetCursorPos(x, y);

    // Simula um clique no bot�o esquerdo do mouse
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    Sleep(500);
    typeText(texto);

    return 0;

}
