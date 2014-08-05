#include <stdio.h>

#define BS_SZ 60 // Tamanho da barra de status

int main(void) {
        int status;
        long int d1, d2;

        for(status = 0; status <= BS_SZ; status++) {
                printf("\rProcessando: ["); // Abre a barra de status
                for(d1 = 1; d1 <= status; d1++) printf("="); // Exibe status atual
                for(d1 = (status + 1); d1 <= BS_SZ; d1++) printf(" "); // Preenche com espaco em branco
                printf("]"); // Fecha a barra de status
                fflush(stdout);
                for(d1 = 1; d1 <= 9900; d1++) for(d2 = 1; d2 <= 9900; d2++);
        }
        printf("\nFinalizado!\n");
}
