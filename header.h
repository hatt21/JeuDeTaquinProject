#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <readline/history.h>
#include <readline/readline.h>

typedef struct{
    int* array;
    int top;
}STACK_INT;

STACK_INT init_STACK_INIT();

void print_all(STACK_INT stack);

void print_top(STACK_INT stack);

int reverse(STACK_INT* stack);

void clear(STACK_INT* stack);

void add_to_stack (STACK_INT* stack, int value); 

int isDigit(char c);

int isAllDigit(char* buff, int taille);

int isOperande(char c,STACK_INT* stack);

int isAction(char c, STACK_INT* stack);

void reinit_buff(char* buff,int taille);

int mult_STACK(STACK_INT* stack);

int div_STACK(STACK_INT* stack);

int mod_STACK(STACK_INT* stack);

int add_STACK(STACK_INT* stack);

int sub_STACK(STACK_INT* stack);

int factorielle(int valeur);

int fact_STACK(STACK_INT* stack);

int exp_STACK(STACK_INT* stack);

