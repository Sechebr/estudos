/** 
 *programa para calcular o valor gasto de combustivel em uma viagem.

voce tera 3 variaveis, sendo elas:
- 1 Preco do etanol;
- 2 preco do gasolina;
- 3 O tipo do combustivel que esta no carro;
- 4 gasto medio de combustivel do carro por km;
- 5 Distancia em km da viagem;

imprimir no console o valor que sera gasto para realizar esta viagem */

const precoEtanol = 4.0;
const precoGasolina = 6.0;
const kmPorLitros  = 10;
const DistanciaEmKm = 100;
const tipoCombustivel = 'Etanol';

const litrosConsumidos = DistanciaEmKm / kmPorLitros;

if(tipoCombustivel === 'Etanol'){
    const valorGasto = litrosConsumidos * precoEtanol;
    console.log(valorGasto.toFixed(2));
}
else{
    const valorGasto = litrosConsumidos * precoGasolina;
    console.log(valorGasto.toFixed(2));
}

