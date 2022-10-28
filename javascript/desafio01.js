/** programa para calcular o valor gasto de combustivel em uma viagem.
voce tera 3 variaveis, sendo elas:
- 1 Preco do combustivel;
- 2 gasto medio de combustivel do carro por km;
- Distancia em km da viagem;

imprimir no console o valor que sera gasto para realizar esta viagem
 */
const PrecoCombustivel = 5.79;
const kmPorLitros = 12;
const DistanciaEmKm = 1580;

const litrosConsumidos = DistanciaEmKm / kmPorLitros;
const valorGasto = litrosConsumidos * PrecoCombustivel;
console.log(valorGasto.toFixed(2));