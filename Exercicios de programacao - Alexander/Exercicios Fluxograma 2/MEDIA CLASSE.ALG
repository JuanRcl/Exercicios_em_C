algoritmo "Media classe" //Le o numero de alunos
//Para cada aluno le as suas 3 notas e escreve
//sua media e no final escreve a media da turma

var
   numeroal, nota1, nota2, nota3, media,mediaturma, mediaturma1, mediaturma2: real
inicio
mediaturma <- 1
  escreva("Digite o numero de alunos da turma: ")
    leia (numeroal)
  escreval("Digite as 3 notas do aluno: ")
    leia (nota1, nota2, nota3)
media := (nota1+nota2+nota3)/3 ;
  escreval("A nota do aluno é: ",media)
mediaturma1 <- (mediaturma+media)
mediaturma2 <- (mediaturma1/numeroal)
  escreval("A media da turma é: ",mediaturma2)
fimalgoritmo