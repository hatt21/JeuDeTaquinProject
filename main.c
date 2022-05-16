#include "header.h"

int main(int argc, char const *argv[]){

  char caractere ;
  char* line = readline("");
  char* buff = malloc (sizeof(char)*30);

  int i = 0;
  int compt_buff = 0;

  STACK_INT stack = init_STACK_INIT();

  while(1){
    caractere = line[i];

    if(caractere == 'q'){
      break;
    }

    if(isAction(caractere,&stack)){
      i++;
      continue;
    }

    if(isOperande(caractere,&stack)){
      i++;
      continue;
    }

    if(isDigit(caractere)){
      buff[compt_buff] = caractere;
      compt_buff ++ ;
      i++;
      continue;
    }
    
    if(i >= strlen(line) ){
      line = readline("");
      i = 0;
      if(compt_buff != 0){
        add_to_stack(&stack,atoi(buff));
        reinit_buff(buff,compt_buff);
        compt_buff = 0;
        continue;

      }
      
    }

    if(caractere == ' '){ 
      if(compt_buff != 0){
        add_to_stack(&stack,atoi(buff));
        reinit_buff(buff,compt_buff);
        compt_buff = 0 ;
        i++;
        continue;
      }
      i++;
    }
  
  }

  return 0;
}

