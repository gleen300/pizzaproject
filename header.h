#ifndef HEADER_H
#define HEADER_H

//Includes
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

//GLOBAISSS

    char n_bebida[30];
    char q_bebida[3];
    char c_bebida[4];

int screen_login();
int check_login();
int clear();
int show_menu();
int select_menu();
int register_menu();
int select2_menu();
int bebidas_menu();
int bebidas_add();
void    get_time();
void    save_bebidas();

#endif