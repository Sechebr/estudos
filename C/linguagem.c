/**
 linguagem C,
 1-inicio do programa, usando biblioteca;
 2-definicao das variaveis;
 3-instrucao de leitura de dados
 4-instrucao do formato de escrita
 5-demais instrucoes e funcoes
 6-fim do programa

 ------- -- - - - - -- - - - - -- - - -
as primeiras linhas de programacao sao definidas,
pelas bibliotecas
 - stdio: funcoes de entrada e saida;
 - stdlib: transforma string em numeros;
 - string: manipulacao de string;
 - math: operacoes matematicas;
 Exemplo: #include<stdio.h> (declaracao de bibliotecas)

 - - - - - - - - - - - - - - - - - - - - - - - 
 funcao main()
 inicio da execucao de um programa em C;
 
 main() 
 {         
}          

int main()
{
}

void main()
{
}

- - - - - - - - - - - - - - - - - - - - - - - - - 
variaveis em C;

tipo 
inteiro; int;
real; float;
caractere; char;

exemplo:
#include<stdlib.h>
void main(){
    int valor1, valor2, soma;
}
- - - - - - - - - - - - - - - - - - - - - - - - 
Palavras reservadas
auto;break;case;char;const;continue;default;do;double;
else;enum;extern;float;for;goto;if;int;long;register;
return;short;signed;sizeof;static;struct;switch;typedef;
union;unsigned;void;volatile;while;
- - - - - - - - - - - - - - - - - - - - - - - - - -
conceitos : operadores em C:
+; adicao; y+x; 2+9
- ; subtracao ; 10-5
* ; multiplicacao; 10*9
/ ; divisao; 5/5
% ; resto da divisao; 15%2
= ; atribuicao ; a = 2

operadores logicos
&& e logico E - conjuncao

|| ou logico ou - disjuncao

! nao logico NAO - negacao
- - - - - - - - - - - - - - - - - - - 
comando de saida de dados

printf("nome da variavel");

printf("o valor encontrado foi %d", valor1);

comando de saida de dados
scanf("%d",&valor);


*/
main(){
    int valor;
    printf("Digite um numero:");
    scanf("%d",&valor);
    printf("\n o numero e %d", valor);
}
