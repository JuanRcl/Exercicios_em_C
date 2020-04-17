algoritmo "Exercicio20"
var
vcarro, desc1, desc2: real
ano, total, cont, contador : inteiro
resposta : caractere
inicio
escreval("-----------------------Carango Velho----------------------------")
repita
escreval("Informe o valor do carro: ")
  leia(vcarro)
escreval("Informe o ano do carro: ")
  leia(ano)
  desc1 <- (vcarro*0.12)
  desc2 <-(vcarro*0.07)
se (ano<=2000) entao
  vcarro <- (vcarro-desc1)
  escreval()
  escreval("O valor do carro com desconto é R$: ",vcarro:1:2)
  escreval()
  cont <- cont+1
senao
  vcarro <- (vcarro-desc2)
  escreval("O valor do carro com desconto é R$: ",vcarro:1:2)
  escreval()
  contador <- contador+1
fimse
  total <- (cont+contador)
  escreval()
escreva("Deseja continuar caculando com desconto? s/n: ")
  leia(resposta)
  escreval()
ate resposta = ("n")
escreval()
escreval("O total de carros até ano até 2000 é/são: ",cont)
escreval()
escreval("O total de carros com ano superior a 2000 é/são: ",contador)
escreval()
escreval("O total de carros é/são: ",total)
escreval()
fimalgoritmo

