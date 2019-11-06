#include "header.h"

int clear()
{
    int i = 0;
    while(i < 30)
    {
        jump_line();
        i++;
    }
}

int show_menu()
{
    printf("                      MENU PRINCIPAL                       \n");
    printf("    -------------------------------------------------------\n");
    printf("    --           |   1 - Cadastro     |                  --\n");
    printf("    --           |   2 - Pedidos      |                  --\n");
    printf("    --           |   3 - Clientes     |                  --\n");
    printf("    --           |   4 - Reclamações  |                  --\n");
    printf("    -------------------------------------------------------\n");
    select_menu();
    return 0;
}

int select_menu()
{
    char ops;
    printf("\nDigite a opção desejada: ");
    scanf(" %c", &ops);

    switch (ops)
    {
        case '1': 
        register_menu();
        break;

        default:
        printf("\n    ---------------- ERRO: Opção invalida -----------------\n\n\n");
        show_menu();
        break;    
    } 
    return 0;
}