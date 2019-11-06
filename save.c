#include "header.h"

void    save_bebidas()
{
    FILE *arq_bebidas;

    strcat(n_bebida, ".txt");
    arq_bebidas = fopen(n_bebida, "w");
        if(arq_bebidas == NULL)
            printf("Erro na abertura do arquivo");

        fprintf(arq_bebidas, "Produto: %s                \n", n_bebida);
        fprintf(arq_bebidas, "Quantidade: %s             \n", q_bebida);
        fprintf(arq_bebidas, "Codigo: %s                 \n", c_bebida);
        fclose(arq_bebidas);
}