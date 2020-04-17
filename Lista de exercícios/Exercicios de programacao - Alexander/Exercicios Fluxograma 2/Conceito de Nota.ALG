algoritmo "Conceito de nota"
var
n1, n2, n3, media : real
inicio
   escreval("Digite as 3 notas do aluno: ")
   leia(n1, n2, n3)
   media <- (n1+n2+n3)/3.0
     se (media<4) entao
        escreva("E")
     senao
          se (media<6) entao
             escreva("D")
          senao
               se (media<7.5) entao
                  escreva("c")
               senao
                     se (media<9) entao
                         escreva("B")
                     senao
                          escreva("A")
   fimse
        fimse
             fimse
                  fimse
fimalgoritmo