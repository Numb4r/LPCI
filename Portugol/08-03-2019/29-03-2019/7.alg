algoritmo "semnome"
// Função :
// Autor :
// Data : 26/03/2019
// Seção de Declarações
var
n1,n2,n3:real
inicio
leia(n1)
leia(n2)
leia(n3)
se(n1>=0)entao
   escreval(n1^(1/2))
senao
   escreval(n1^2)
fimse
se(n2>10) E (n2<100)entao
   escreval("Numero entre 10 e 100.Intervalo permitido")
fimse
se(n3<n2)entao
   escreval(n2-n3)
senao
   escreval(n2+n3)
fimse

fimalgoritmo
