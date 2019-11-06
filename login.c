#include "header.h"

    char user[15];
    char pass[12];
    int error = 0;

int jump_line()
{
    printf("\n");
    return 0;
}

int screen_login()
{
    printf("          | Bem - vindo a Pizzaria |                 \n");
    printf("\n");
    printf(" ------  Faça seu login para entrar no sistema ------\n");
    printf("\n");
    printf("Login: ");
    scanf("%s", user);
    printf("Senha: ");
    scanf("%s", pass);
    if(error == 1)
    {
        check_login();
    }
    return 0;
}

int check_login()
{
    if(strcmp(user, "pizza") == 0)
    {
        if(strcmp(pass, "1234") == 0)
        {
            printf("\n    ------- Login realizado com sucesso -------      \n");
            clear();
            show_menu();
        }
        else
        {
            printf("\n  ---- ERRO: Senha incorreta ----   \n");
            jump_line();
            error = 1;
            return screen_login();
        } 
    }
    else
    {
        printf("\n  ---- ERRO: Usuario incorreto ----   \n");
        jump_line();
        error = 1;
        return screen_login();
    }

    return 0;
}