function escrevaMeuNome(nome){
    return 'meu nome é: ' + nome;
}

function isDeMaior(idade){
    if (idade >= 18) {
        console.log(escrevaMeuNome('Filipe') + ' Você e de maior, prossiga');
    } else {
        console.log(escrevaMeuNome('Filipe') + ' Você não e de maior, vá para casa');
    }
}

isDeMaior(20);

