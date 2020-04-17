algoritmo "Programa MediaDosPositivos"
Var S,P,N,MD:real
i: inteiro
Inicio
s<-0
P<-0
Para I <- 1 Até 10 Faça
Escreva ("Digite um numero")
Leia (N)
Se N >= 0 Então
S <- (S + N)
p <- p + 1
FimSe
FimPara
MD <-S/P
Escreva ("A média é:", MD)
fimalgoritmo