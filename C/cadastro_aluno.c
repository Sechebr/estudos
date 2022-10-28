/*
faca um programa de cadastro
nome;
endereco;
idade;

aapresentar as informacoes do cadastro
*/

#include <iostream>

int main(int argc, char** argv){

    char nome [30];
    char endereco[30];
    int idade;

    printf("Nome \n");
    scanf("%s", &nome);

    printf("Endereco");
    scanf("%s", &endereco);

    printf("Idade");
    scanf("%d", &idade);

    printf("\n Nome: %s", nome);
    printf("\n endereco: %s", endereco);
    printf("Idade: %d", idade);
    
    return 0;
}