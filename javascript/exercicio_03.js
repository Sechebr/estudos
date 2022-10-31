/*
Elabora um algoritimo que calcule o que deve ser pago por um produto
considere o preço normal de etiqueta e a escolha da condição de pagamento

utilize os códigos da tabela a seguir para ler qual a condição de pagamento
escolhidae efetuar o cálculo adequado.

código condição de pagamento:

1 - Á vista Debito, recebe 10% de desconto;
2 - Á vista no dinheiro ou pix, recebe 15% de desconto;
3 - Em duas vezes, preço normal de etuiqueta sem juros;
4 - Acima de duas vezes, preço normal mais jutos de 10%

*/

const precoEtiqueta = 100;
const formaPagamento = 4;

if (formaPagamento === 1) {
   console.log(precoEtiqueta - (precoEtiqueta * 0.1));
} else if (formaPagamento === 2) {
    console.log(precoEtiqueta - (precoEtiqueta * 0.15));
} else if (formaPagamento === 3) {
    console.log(precoEtiqueta)
} else {
    console.log(precoEtiqueta + (precoEtiqueta * 0.1));
}