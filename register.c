#include "header.h"

char ops;
int erro = 0;

int register_menu()
{
    if(erro == 0)
        clear();
    printf("    ----------------REGISTRAR PRODUTOS---------------------\n");
    printf("    --           |     1 - Bebidas       |               --\n");
    printf("    --           |     2 - Pizzas        |               --\n");
    printf("    --           |     3 - Voltar        |               --\n");
    printf("    -------------------------------------------------------\n");
    printf("\nDigite sua opção: ");
    scanf(" %c", &ops);
    select2_menu();
    return 0;
}

int select2_menu()
{
    switch (ops)
    {
    case '1':
        clear();
        bebidas_menu();
        break;
    case '2':
        break;
    case '3':
        clear();
        show_menu();
        break;
    
    default:
        printf("\n    ---------------- ERRO: Opção invalida -----------------\n\n\n");
        erro = 1;
        register_menu();
        break;
    }
    return 0;
}

int bebidas_menu()
{
    char opt;
    
    printf("    ----------------OPÇÕES DISPONIVEIS---------------------\n");
    printf("    --      |     1 - Adicionar estoque     |            --\n");
    printf("    --      |     2 - Registrar produto     |            --\n");
    printf("    --      |     3 - Voltar                |            --\n");
    printf("    -------------------------------------------------------\n");
    printf("\n Digite sua opção: ");
    scanf(" %c", &opt);

    switch(opt)
    {
        case '1':
            break;
        case '2':
            clear();
            bebidas_add();
            break;
        case '3':
            clear;
            register_menu();
            break;
        default:
            printf("\n    ---------------- ERRO: Opção invalida -----------------\n\n\n");
            erro = 1;
            bebidas_menu();
            break;
    }
    return 0;
}


int bebidas_add()
{
    char confirm;
    FILE *arq_bebidas;

    printf("Digite o nome do produto: ");
    scanf(" %30[^\n]", n_bebida);

    printf("Digite a quantidade a ser adicionada ao estoque: ");
    scanf(" %3[^\n]", q_bebida);

    printf("Digite o codigo de até 3 digitos do produto: ");
    scanf(" %4[^\n]", c_bebida);

    clear();
    printf("    ----------------CONFIRMAR REGISTRO---------------------\n");
    printf("    ---------------> Produto: %s                           \n", n_bebida);
    printf("    ---------------> Quantidade: %s                        \n", q_bebida);
    printf("    ---------------> Codigo: %s                            \n", c_bebida);
    printf("    -------------------------------------------------------\n");
    printf("\nDeseja confirmar o novo produto ? (s/n) ");
    scanf(" %c", &confirm);

    switch (confirm)
    {
    case 's':
        clear();
        save_bebidas();
        printf("    ----------------PRODUTO REGISTRADO!---------------------\n");
        break;
    
    default:
        clear();
        bebidas_menu();
        break;
    }
    return 0;
}