/** Estrutura consicional em JaavaScript */
const numero = 3;

const numeroDivisivelPor5 = (numero % 5) === 0;

if (numero === 0) {
    console.log('Numero invalido');
}
else if (numeroDivisivelPor5){
    console.log('Sim');
}
else {
    console.log('Nao');
}


