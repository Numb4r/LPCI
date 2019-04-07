algoritmo "semnome"
// Função :
// Autor :
// Data : 26/03/2019
// Seção de Declarações 
var
nome:caracter
cmp:real
aux:inteiro
inicio
leia(nome)
leia(cmp)
escreval("Deseja pagar a vista ou a prazo ?")
escreval("1.A vista")
escreval("2.A prazo")
leia(aux)
escreval("Valor final: ")
se(aux=1)entao
escreval(cmp-cmp*0.1)
senao
escreval(cmp+cmp*0.15)
fimse
fimalgoritmo
