algoritmo "Media classe enquanto"
var
mediaturma, numeroal, nota1, nota2, nota3, i, media, mediaturma2 : real

inicio
escreval("Digite o numero de alunos da turma: ")
leia(numeroal)
i <- 0
mediaturma <- 0
enquanto i<numeroal faca
  escreval("Digite as 3 notas do aluno: ")
  leia(nota1,nota2,nota3)
  media <- (nota1+nota2+nota3)/3
  escreval("A media do aluno é: ",media)
  mediaturma <- (mediaturma+media)
  mediaturma2 <- (mediaturma/numeroal)
i <- i+1
fimenquanto
escreval()
escreval("A media da turma é: ",mediaturma2)
fimalgoritmo