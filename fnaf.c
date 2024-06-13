#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

// Fun��o para gerar um beep com uma frequ�ncia espec�fica e dura��o aleat�ria
void playBeep(int frequency) {
    // Gera uma dura��o aleat�ria entre 100 e 1000 milissegundos
    int duration = rand() % 901 + 100;

    // Emite o beep com a frequ�ncia e dura��o especificadas
    Beep(frequency, duration);
}

// Fun��o para obter a frequ�ncia de uma nota na escala menor harm�nica com ajuste de semitons
int getNoteFrequency(char note, int semitones) {
    const int scale[] = {261, 294, 311, 349, 392, 415, 493}; // Frequ�ncias da escala menor harm�nica (C, D, D#, F, G, G#, B)
    const char notes[] = {'C', 'D', 'D', 'F', 'G', 'G', 'B'}; // Notas da escala menor harm�nica
    const int scaleSize = sizeof(scale) / sizeof(scale[0]);

    for (int i = 0; i < scaleSize; i++) {
        if (note == notes[i]) {
            int index = (i + semitones + scaleSize) % scaleSize;
            return scale[index];
        }
    }

    return 0; // Nota n�o encontrada
}

int main() {
    // Semente para a fun��o rand()
    srand(time(NULL));

    // Mensagem de boas-vindas
    printf("Bem-vindo ao Gerador de M�sica Aleat�ria!\n");
    printf("Pressione qualquer tecla para tocar uma sequ�ncia de acordes aleat�ria ou 'Q' para sair.\n");

    // Loop at� o usu�rio pressionar 'Q'
    char input;
    while (1) {
        // Aguarda o usu�rio pressionar uma tecla
        input = getchar();

        // Sai do loop se o usu�rio pressionar 'Q'
        if (input == 'Q' || input == 'q') {
            printf("Obrigado por usar o Gerador de M�sica Aleat�ria. At� logo!\n");
            break;
        }

        // Toca a sequ�ncia de acordes
        playBeep(getNoteFrequency('C', 0)); // C (t�nica)
        playBeep(getNoteFrequency('G', 3)); // G (dominante, aumentado 3 semitons)
        playBeep(getNoteFrequency('B', 7)); // B (outra nota, aumentado 7 semitons)
    }

    return 0;
}
