#include "header.h"

STACK_INT init_STACK_INIT(){
	STACK_INT stack;
	stack.top=0;
	stack.array=malloc(sizeof(int));
	return stack;
}

void print_all(STACK_INT stack){
	if(stack.top > 0){
		int i;
		printf("[ ");
		for(i = 0 ; i < stack.top - 1 ; i++){
			printf(" %d ,",stack.array[i] );

		}
		printf(" %d]\n",stack.array[stack.top - 1] );
	}
	else{
		fprintf(stderr, "Erreur: pile vide \n");
	}
}

void print_top(STACK_INT stack){
	if(stack.top > 0){
	printf("[...%d]\n",stack.array[stack.top - 1] );
	}
	else{
		fprintf(stderr, "Erreur: pile vide \n");
	}
}

void clear(STACK_INT* stack){
	if(stack->top!=0){
		size_t size=sizeof(int)*stack->top;
		memset(stack->array,0,size);
		stack->top=0; 
	}
}

void add_to_stack (STACK_INT* stack, int val){
	stack->array[stack->top]=val;
	stack->top+=1;
}

int reverse(STACK_INT* stack){
	if(stack->top<2){ 
		fprintf(stderr, "Erreur: La pile contient qu'un élément \n");
		return 0;
	}
	else{
		int tmp = stack->array[stack->top-1];
		stack->array[stack->top-1] = stack->array[stack->top - 2];
		stack->array[stack->top - 2] = tmp;
		return 1;
	}
}


