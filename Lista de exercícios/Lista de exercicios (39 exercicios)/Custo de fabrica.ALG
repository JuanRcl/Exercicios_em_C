algoritmo "Custo de fabrica"
var
custof, imposto, distribuidor, custofinal : real
inicio
escreva("Digite o valor de fábrica do carro: ")
  leia(custof)
imposto <- (custof*0.45)
distribuidor <- (imposto*0.28)
custofinal <- (custof+distribuidor)
escreva("O custo final do carro é: ",custofinal:1:2)
fimalgoritmo