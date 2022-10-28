/*
estruturas condicionais com linguagem C

if
tomar uma decisao e criar um desvio dentro do programa

estrutura do if

if()
{
    comandos;
}

if (num>0)
{
    printf("numero e positivo");
}

--- - - - - - - -- - -- -- -- -- -- - - - 

if e else estrutura

if(condicao)
{
    comandos;
}
else
{
    comandos;
}

- - - - - - - - - - - - - - - - - - - - -  - - - 

if (num>0)
{
    printf("o numero e positivo");
}
else
{
    printf("o numero e negativo");
}

- - - - - - - - - - - - - - - - - - - - - - - - - - - 

switch case 

estrutura de cadeia de condicoes

switch(variavel){
    case constante1:
    
    <comandos>
    break;

    caso constante2:

    <comandos>
    break;

    default:<comandos>}

    exemplo

switch ( valor )
{
    case 1 :
    printf("domingo\n");
    break;

    case 2 :
    printf("segunda\n");
    break;

    default :
    printf("valor invalido\n");
}
exercicio:
tabela de desconto do inss

1.693,72   8%
1.693,73 ate 2.822,90 9%
2.822,91 ate 5.646,80 11%
5.646,81  R$ 621,09 (invariavelmente)
- - - - - - - - - - - - - - - - - - - - - - - - - 

for
repetir uma informacao por  um numero fixo de vezes.

for(inicializacao; condicao final; incremento)
{
comandos;
}

for (int x=0; x < 10; x++)
{
  
    printf("%d", x);

}

*/

int main(int argc, char** argv) {
    float salario, inss, ir, salario_liquido;
    
    printf("digite seu salario bruto");
    scanf("%f", &salario);

    if(salario <= 1693.72)
    {
        inss =salario * 0.08;
    }
    else
    if(salario >= 1693.73 && salario <= 2822.90)
    {
        inss = salario * 0.09;
    }

    salario_liquido = (salario - inss) -ir;
    
    printf("\n desconto inss: %f\n", inss);

    printf("\n salario liquido %2", salario_liquido);
    
    return 0;
}

int main(int argc, char** argv){
    int contador;

    printf("\n Digite um valor");
    scanf("%d", &contador);

    for(contador; contador >= 1; contador--)
    {
        printf("%d ", contador);
    }
        return 0;
}