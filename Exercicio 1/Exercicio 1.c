/*1. Faça um programa em C que mostre a tabuada
 de qualquer número escolhido pelo usuário 
 (considerar tabuada do número 1 ao 10). 

*/
#include<stdio.h>

// aqui começo a desenvolver os "prototipos das funções"
int pergunta_tabuada();
void tabuada(int tabuada);
//aqui paro a prototipagem das funções

int main(){ 
    
    int r = pergunta_tabuada(); //Defino o valor do int r chamando a função pergunta_tabuada
    tabuada(r); // com o valor r chamo a funçao tabuada, onde ocorre o "codigo" para a geração da tabela

    return 0;
}


//aqui termina minha main e começo a criar o "corpo" das funçoes
int pergunta_tabuada(){
    int r;
    printf("Digite por favor o numero da tabuada que deseja: ");
    scanf("%i", &r);
    return r;
}

void tabuada(int tabuada){
  for (int x = 0; x <=10; x++)
  {
    printf("\n%i * %i: %i", x, tabuada, tabuada * x);
  }
  
}