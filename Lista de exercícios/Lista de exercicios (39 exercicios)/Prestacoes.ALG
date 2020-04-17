algoritmo "Prestacoes"
var
compra, p1, p2, p3, p4, p5 : real
inicio
escreva("Informe o valor da compra: ")
  leia(compra)
p1 <- (compra/1)
p2 <- (compra/2)
p3 <- (compra/3)
p4 <- (compra/4)
p5 <- (compra/5)
escreval("O valor da compra pode ser parcelado em até 5 vezes de: ")
escreval("1x: ",p1:1:2)
escreval("2x: ",p2:1:2)
escreval("3x: ",p3:1:2)
escreval("4x: ",p4:1:2)
escreval("5x: ",p5:1:2)
fimalgoritmo