algoritmo "Deposito rendimento"
var
dep, ren, juros : real
inicio
escreva("Informe o valor do depósito: R$")
  leia(dep)
juros <- (dep*0.7)
ren <- (dep+juros)
escreval("O valor com o rendimento do depósitono mês é: R$",ren)
fimalgoritmo