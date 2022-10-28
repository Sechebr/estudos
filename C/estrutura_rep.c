/*
estruturas de repeticao, que irao ser repetidos ate acondicao de parada ser atingida


while(consicao)
{
    comandos;
}

exemplos 

while(valor < 10)
{
    printf("valor = %d", valor);

    valor ++;
}
- - - - - - - - - - - - - - - - - - - - - -  -

loop
contador - e utilizado para controlar as repeticoes

incremento e decremento - controlam o contador, seja aumentando ou diminuindo

acumulador - irar somar as entradas de dados de cada
iteracao da repeticao, gerando um somatorio a ser
utilizado quando da saida da repeticao

condicao de parada - utilizada para determinar o momento de parada quando nao se tem
um valor exato desta repeticao.

- - - - - - - - - - - - - - - - - - - - - - 
do-while 
analisa a condicao ao final do laco, ou seja, os comando sao executados antes do teste de condicao

do while estrutura

do
{
    comandos;
}while(condicao);

do
{
    printf("valor = %d", valor);

    valor ++;
}while (valor < 10);

Elaborar um programa em que os cliente consigam 
ver os valores nutricionais de cada sorvete
*/
int main(int argc, char** argv){
    int i;

    do
    {
        printf("\n digite o numero do sabor \n");
        
        printf("\t (1) ...flocos \n");
        printf("\t (2) ...morando\n");
        printf("\t (3) ...uva");

        scanf("%d", &i);
    }while((i<1) || (i>3));

    switch (i)
    {
    case 1:
        printf("\t\t Voce escolheu flocos");
        break;
    
    case 2:
        printf("\t\t Voce escolheu morango");
        break;
   
    case 3:
        printf("\t\t voce escolheu uva");
        break;
    default:
        break;
    }
    return 0;
}
