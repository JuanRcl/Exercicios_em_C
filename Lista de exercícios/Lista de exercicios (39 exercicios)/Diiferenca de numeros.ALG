algoritmo "Diferenca de valores"
var
v1, v2, r1, r2 : inteiro
inicio
   escreval("Informe 2 valor: ")
   leia(v1, v2)
   r1 <- (v1-v2)
   r2 <- (v2-v1)
     se v1>v2 entao
        escreval("A diferenca é: ",r1)
     senao
          escreval("A diferenca é: "r2)
     fimse
fimalgoritmo