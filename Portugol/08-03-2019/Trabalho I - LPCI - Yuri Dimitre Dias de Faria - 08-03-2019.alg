algoritmo "Trabalho I - LPCI - Yuri Dimitre Dias de Faria"
// Função :
// Autor : Yuri Dimitre Dias de Faria
// Data : 08/03/2019
var
Nmedia1,Nmedia2,Nmedia3,Terc:real
NAntSuc,Soma1,Soma2,SomaVQ:inteiro
inicio
// Seção de Comandos 
//1
SomaVQ <- 28*43
escreval("28*43 = ",SomaVQ)
//2
escreval("Entre com tres numeros para fazer a media")
leia(Nmedia1)
leia(Nmedia2)
leia(Nmedia3)
escreva("A media dos numeros e = ",(Nmedia1+Nmedia2+Nmedia3)/3)
//3
escreval("Entre com um numero para mostrar seu antecessor e sucessor")
leia(NAntSuc)
escreval("Seu antecessor e ",NAntSuc-1," e seu sucessor e ",NAntSuc+1)
//4
escreval("Entre com dois numeros para serem somados")
leia(Soma1)
leia(Soma2)
escreval("SOMA = ",Soma1+Soma2)
//5
escreval("Entre com um numero para ser mostrado a terca parte dele")
leia(Terc)
escreval("A terca parte do numero ",Terc," e ",Terc/3)
//6
escreval("Escreva dois numeros para mostrar a divisao entre eles")
leia(Numero1)
leia(Numero2)
escreval("Dividendo: ",Numero1)
escreval("Divisor: ",Numero2)
escreval("Quociente: ",Numero1/Numero2)
escreval("Resto: ",Numero1%Numero2)
//7
escreval("Entre com 4 numeros para tirar a media ponderada")
leia(Numero1)
leia(Numero2)
leia(Numero3)
leia(Numero4)
Resultado <- (Numero1+(Numero2*2)+(Numero3*3)+(Numero4*4))/10.0
escreval("A media ponderada e = ", Resultado)
//8
escreval("Entre com o saldo de uma aplicacao")
leia(Numero1)
escreval("O saldo reajustado e de ",Numero1+(Numero1*0.01))
//9
escreval("Entre com a base e a altura do triangulo")
leia(Numero1)
leia(Numero2)
escreval("Seu perimetro e ",2*Numero1+2*Numero2," e sua area e de ",Numero1*Numero2)
//10
escreval("Escreva o raio do circulo")
leia(Numero1)
escreval("O perimetro do circulo e ",2*PI*Numero1)
//11
escreval("Entre com base e a aultura do triangulo")
leia(Numero1)
leia(Numero2)
escreval("A area do triangulo e ", (Numero1*Numero2)/2)
//12
escreval("Escreva o valor da prestacao,a taxa e o tempo para calcular a multa de atraso ")
leia(Numero1)
leia(Numero2)
leia(Numero3)
escreval("O valor da prestacao com atraso e ", Numero1+(Numero1 *(Numero2/100)*Numero3)   )
//13
escreval("Entre com o numerador e denominador de uma fracao")
leia(Numero1)
leia(Numero2)
escreval("A fracao em decimao e ",Numero1/Numero2)
fimalgoritmo
