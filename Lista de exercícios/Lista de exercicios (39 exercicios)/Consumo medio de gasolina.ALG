algoritmo "Consumo medio de gasolina"
var
dk, cl, cm : real
inicio
   escreval("Informe a distancia percorrida do veiculo em km: ")
   leia(dk)
   escreval("Informe quantos litros foram utilizados no percurso em Litros: ")
   leia(cl)
cm <- (dk/cl)
escreval("O consumo medio do combustivel foi de: ",cm," L")
fimalgoritmo