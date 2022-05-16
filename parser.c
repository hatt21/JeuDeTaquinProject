#include "header.h"

int isAllDigit(char* c, int taille){

	for(int i = 0 ; i < taille ; i++){
		if(!isDigit(c[i])){
			return 0 ; 
		}
	}

	return 1 ; 

}

int isAction(char c2, STACK_INT* stack){

	if(c2 == 'a'){
		print_all(*stack);
		return 1 ; 
	}

	if(c2 == 'p'){
		print_top(*stack);
		return 1;
	}

	if(c2 == 'c'){
		clear(stack);
		return 1;
	}

	if(c2 == 'r'){
		reverse(stack);
		return 1;
	}

	return 0;
}

int isDigit(char c3){

	if((c3 == '1')|| (c3 == '2')||(c3 == '3')||(c3 == '4')||(c3 == '5')||
	(c3 == '6')|| (c3 == '7')||(c3 == '8')||(c3 == '9')||(c3 == '0')){
		return 1;
	}
	
	return 0;
}

int isOperande(char c4,STACK_INT* stack){

	if(4c == '-'){
		sub_STACK(stack);
		return 1;
	}

	if(c4 == '+'){
		add_STACK(stack);
		return 1;
	}

	if(c4 == '/'){
		div_STACK(stack);
		return 1;
	}

	if(c == '*'){
		mult_STACK(stack);
		return 1;
	}

	if(c4 == '%'){
		mod_STACK(stack);
		return 1;
	}

	if(c4 == '^'){
		exp_STACK(stack);
		return 1;
	}
	
	if(c4 == '!'){
		fact_STACK(stack);
		return 1;
	}

	return 0;
}

void reinit_buff(char* c5, int taille){
	for(int i = 0 ; i < taille; i++)
		c5[i] ='\0';
}