/**1) Faca um algoritimo que dado as 3 notas tiradad pelo alina em um semestre na faculdade
calcule sua medio e a classificacao conforme a tabela a baixo

media === (nota1 + nota2 + nota3) / 3;

classificacao
-media menor que 5, reprovacao;
-media entre 5 e 7, recuperacao;
-media acima de 7, passou de semestre;
 */

const nota1 = 7;
const nota2 = 7;
const nota3 = 8;
const media = (nota1 + nota2 + nota3) / 3;
console.log(media);

if (media < 5){
    console.log('R E P R O V A D O');
} 
else if (media >= 5 && media <= 7){
    console.log('R E C U P E R A C A O');
}
else{
    console.log('P A S S O U !');
}
