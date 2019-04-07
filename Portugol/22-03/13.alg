algoritmo "Notas"
// Função :
// Autor :
// Data : 22/03/2019
// Seção de Declarações
var
n1,n2,n3,n4,final,exame:real

inicio
// Seção de Comandos
leia(n1)
leia(n2)
leia(n3)
leia(n4)
final <- (n1+n2+n3+n4)/4
se(final>=7)entao
   escreval("Aluno aprovado")
   escreval("Media :",final)
senao
escreval("Media atual :",final)
escreval("Exame :")
   leia(exame)

   final <- (final + exame)/2
   se(final >=5)entao
      escreval("Aluno aprovado")
   senao
      escreval("Aluno reprovado")
   fimse
   escreval("Media :",final)
fimse

fimalgoritmo
