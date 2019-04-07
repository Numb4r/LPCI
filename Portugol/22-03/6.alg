algoritmo "Verificar multiplo"
// Função :
// Autor :
// Data : 22/03/2019
// Seção de Declarações 
var
n1,n2,n3,n4,total:inteiro
inicio
// Seção de Comandos
leia(n1)
leia(n2)
leia(n3)
leia(n4)
total <- n1+n2+n3+n4
se (total%n1=0)
   escreval(total,"e multiplo de",n1)
fimse
se (total%n2=0)
   escreval(total,"e multiplo de ",n2)
fimse
se (total%n3=0)
   escreval(total,"e multiplo de",n3)
fimse
se (total%n4=0)
   escreval(total,"e multiplo de ",n4)
fimse
fimalgoritmo
