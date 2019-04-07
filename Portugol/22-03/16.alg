algoritmo "Media de aproveitamento"
// Função :
// Autor :
// Data : 22/03/2019
// Seção de Declarações
var
id,n1,n2,n3,media:real
inicio
// Seção de Comandos
leia(id)
leia(n1)
leia(n2)
leia(n3)
media <-(n1+n2+n3)/3
media <- (n1+n2*2+n3*3+media)/7
se (media>=9)entao
   escreval("A")
senao
   se(media>=7.5) entao
      escreval("B")
   senao
      se(media>=6)entao
         escreval("C")
      senao
         se(media>=4)entao
            escreval("D")
         senao
            escreval("E")
         fimse
      fimse
   fimse
fimse

fimalgoritmo
