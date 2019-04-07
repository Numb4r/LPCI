algoritmo "Prestacao"
// Função :
// Autor :
// Data : 22/03/2019
// Seção de Declarações 
var
salario,prestacao:real
inicio
// Seção de Comandos 
leia(salario)
leia(prestacao)
se(prestacao> salario*0.2)entao
              escreval("emprestimo nao pode ser concedido")
senao
              escreval("Emprestimo pode ser concedido")
fimse
fimalgoritmo
