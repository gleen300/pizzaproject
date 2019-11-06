#include "header.h"

void    get_time()
{
    time_t agora;
    char data[50];
    char hora[50];

    agora = time(NULL);

    strftime(data, sizeof(data),"%d/%m/%Y",localtime(&agora));
    strftime(hora, sizeof(hora),"%H:%M:%S",localtime(&agora));
    printf( "DATA: %s\n", data);
    printf( "HORA: %s\n", hora);
}