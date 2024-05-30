/*
3. A série de Fibonacci 
é formada pela seguinte sequência: 
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, etc. 
Escreva um algoritmo que gere a série de Fibonacci até o vigésimo termo.
*/
#include<stdio.h>
#define termo 5

int main(){
    int x = 1;
    int y = 1;
    
    int rodada = 0;
    while(rodada <= termo ){
    y = x + 1;
    printf("\n%d, %d",x, y);
    x = y  1;
    printf("\n%d, %d",x, y);
    
    rodada++;
    }
    return 0;
}