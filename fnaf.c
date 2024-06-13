#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

// Função para gerar um beep com uma frequência específica e duração aleatória
void playBeep(int frequency) {
    // Gera uma duração aleatória entre 100 e 1000 milissegundos
    int duration = rand() % 901 + 100;

    // Emite o beep com a frequência e duração especificadas
    Beep(frequency, duration);
}

// Função para obter a frequência de uma nota na escala menor harmônica com ajuste de semitons
int getNoteFrequency(char note, int semitones) {
    const int scale[] = {261, 294, 311, 349, 392, 415, 493}; // Frequências da escala menor harmônica (C, D, D#, F, G, G#, B)
    const char notes[] = {'C', 'D', 'D', 'F', 'G', 'G', 'B'}; // Notas da escala menor harmônica
    const int scaleSize = sizeof(scale) / sizeof(scale[0]);

    for (int i = 0; i < scaleSize; i++) {
        if (note == notes[i]) {
            int index = (i + semitones + scaleSize) % scaleSize;
            return scale[index];
        }
    }

    return 0; // Nota não encontrada
}

int main() {
    // Semente para a função rand()
    srand(time(NULL));

    // Mensagem de boas-vindas
    printf("Bem-vindo ao Gerador de Música Aleatória!\n");
    printf("Pressione qualquer tecla para tocar uma sequência de acordes aleatória ou 'Q' para sair.\n");

    // Loop até o usuário pressionar 'Q'
    char input;
    while (1) {
        // Aguarda o usuário pressionar uma tecla
        input = getchar();

        // Sai do loop se o usuário pressionar 'Q'
        if (input == 'Q' || input == 'q') {
            printf("Obrigado por usar o Gerador de Música Aleatória. Até logo!\n");
            break;
        }

        // Toca a sequência de acordes
        playBeep(getNoteFrequency('C', 0)); // C (tônica)
        playBeep(getNoteFrequency('G', 3)); // G (dominante, aumentado 3 semitons)
        playBeep(getNoteFrequency('B', 7)); // B (outra nota, aumentado 7 semitons)
    }

    return 0;
}
