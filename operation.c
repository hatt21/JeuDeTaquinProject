#include "header.h"

int sub_STACK(STACK_INT* stack){
	if(stack->top > 1){
		int res;
		res = stack->array[stack->top -2] - stack->array[stack->top -1];
		stack->array[stack->top -2] = res;
		stack->array[stack->top -1] = 0;
		stack->top -=1;
		return 1;
	}

	else{
		fprintf(stderr, "Erreur: La pile n'a pas assez d'elements \n");
		return 0;
	}
}

int add_STACK(STACK_INT* stack){
	if(stack->top>1){
		int res;
		res = stack->array[stack->top -2] + stack->array[stack->top -1];
		stack->array[stack->top -2] = res;
		stack->array[stack->top -1] = 0;
		stack->top -=1;
		return 1;
	}

	else{
		fprintf(stderr, "Erreur: La pile n'a pas assez d'elements \n");
		return 0;
	}
}

int div_STACK(STACK_INT* stack){
	if((stack->top > 1) && (stack->array[stack->top -1] != 0 )){
		int res;
		res = stack->array[stack->top -2] / stack->array[stack->top -1];
		stack->array[stack->top -2] = res;
		stack->array[stack->top -1] = 0;
		stack->top -=1;
		return 1;
	}

	else{
		if((stack->top < 1)){
			fprintf(stderr, "Erreur: La pile n'a pas assez d'elements \n");
		}
		fprintf(stderr, "Erreur: division par 0 \n");

		return 0;
	}
}

int mult_STACK(STACK_INT* stack){
	if(stack->top > 1){
		int res;
		res = stack->array[stack->top -2] * stack->array[stack->top -1];
		stack->array[stack->top -2] = res;
		stack->array[stack->top -1] = 0;
		stack->top -=1;
		return 1;
	}

	else{
		fprintf(stderr, "Erreur: La pile n'a pas assez d'elements \n");
		return 0;
	}
}

int mod_STACK(STACK_INT* stack){
	if(stack->top > 1){
		int res;
		res = stack->array[stack->top -2] % stack->array[stack->top -1];
		stack->array[stack->top -2] = res;
		stack->array[stack->top -1] = 0;
		stack->top -=1;
		return 1;
	}

	else{
		fprintf(stderr, "Erreur: La pile n'a pas assez d'elements \n");
		return 0;
	}
}

int factorielle(int valeur){
   if (valeur == 0){
      return 1;
   }

   else{
      return valeur * factorielle(valeur - 1);
   }
}

int exp_STACK(STACK_INT* stack){
	if(stack->top > 0){
		double nb =(double) stack->array[stack->top - 1]; 
		stack->array[stack->top - 1] =(int) exp(nb);
		return 1;
	}	

	fprintf(stderr, "Erreur: pile vide \n");
	return 0;

}

int fact_STACK(STACK_INT* stack){
	if(stack->top > 0){
		int nb = stack->array[stack->top - 1]; 
		stack->array[stack->top - 1] = factorielle(nb);
		return 1;
	}
		
	else{
		fprintf(stderr, "Erreur: pile vide \n");
		return 0;
	}
}


