#include <stdio.h>

int main(void) {
    int status;

    for(status = 1; status <= 100; status++) {
        printf("\rProcessando - %u%%", status);
        fflush(stdout); // Dando descarga de stdout...
        // Operacoes do programa
        for(d1 = 1; d1 <= 6500; d1++) for(d2 = 1; d2 <= 6500; d2++); // Tarefa DUMMY - Apenas para consumir tempo e simular funcionamento.
    }
    printf("\nFinalizado!\n");
}
