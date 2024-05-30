/*
2. A prefeitura de uma cidade fez uma pesquisa
com 200 pessoas, coletando dados sobre o salário
 e o número de filhos. A prefeitura deseja saber
• A média do salário dessas pessoas ok
• A média do número de filhos ok 
• O maior salário ok
*/

#include<stdio.h>
#define pesquisados 5

void pesquisa(float * somasalarios, float * somafilhos,  float *  maiorsalario);
float calculomedia(float a, int b);

int main(){
    float resultado;
   
    float somasalarios = 0, somafilhos = 0, maiorsalario = 0;
    
    pesquisa(&somasalarios, &somafilhos, &maiorsalario);
    
    resultado = calculomedia(somasalarios, pesquisados);
    printf("\nA media dos salarios entre os entrevistados es:%2.0f ", resultado);

    resultado = calculomedia(somafilhos, pesquisados);
    printf("\nA media dos filhos entre os entrevistados es:%2.0f ", resultado);

    printf("\nEste e o maior salario:%2.0f ", maiorsalario);
    return 0;
}

float calculomedia(float a, int b){
    float resultado;
    
    resultado = a / b;q

    return resultado;
}
void pesquisa(float *somasalarios, float *somafilhos,  float * maiorsalario) // Função encarregada de obter os dados da pesquisa e amarazenar ele nos ponteiros que serão chamados na main.
{
    
    int filhos[pesquisados];
    float salario[pesquisados]; // Array que ira armazenar uma quantidade de flots refentes àos pesquisados

    for (int x = 0; x < pesquisados; x++)
    {
        int candidato = x + 1;
        
        printf("\nOla entrevistado %i, Insira os seguintes dados:\nSeu salario: ",candidato);
        scanf("%f", &salario[x]); 
        
        
        *somasalarios = salario[x] + *somasalarios;
        if(salario[x] >= *maiorsalario){
            *maiorsalario = salario[x];
        }
        
        printf("Qtd Filhos: ");
        scanf("%i", &filhos[x]);
        *somafilhos= filhos[x] + *somafilhos;

    }
}