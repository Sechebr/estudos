/*

funções javascript === coisas simples como, simples bloco de codigos
que podemos invocas a sua função a qualquer momento

*/
/*
function incrementarJuros(valor, percentualJuros){
    const valorAcrecimo = (percentualJuros / 100) * valor;
    return valor + valorAcrecimo
}
console.log(incrementarJuros(100, 10))
console.log(incrementarJuros(100, 15))
console.log(incrementarJuros(100, 20))

*/
function calcularImc(peso, altura){
    return peso / Math.pow(altura, 2);
}

function classificarImc(imc){

    if(imc < 18.5){
        return 'Voce esta acima do peso';
    }else if(imc >= 18.5 && imc < 25){
        return 'Peso normal';
    }else if(imc <= 25 && imc < 30){
        return 'Voce esta acima do peso';
    }else if(imc <= 30 && imc < 40){
       return 'Voce esta obeso';
    }else{
        return 'Voce esta com obesidade grave';
    }
}

function main(){
    const peso = 120;
    const altura = 1.80;

    const imc = calcularImc(peso, altura);
    console.log(classificarImc(imc));
}

main()