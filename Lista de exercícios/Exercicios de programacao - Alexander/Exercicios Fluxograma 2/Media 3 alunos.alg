algoritmo "media de aluno"
var
media,n1,n2,n3 : inteiro
inicio
escreval("Digite as notas do aluno: ")
leia(n1,n2,n3)
media := (n1+n2+n3)\3
se(media>=5) entao
   escreva("Aprovado")
senao
   se (media>=3) entao
      escreva("Em prova final")
   senao
     escreva("Reprovado")
   fimse
fimse


fimalgoritmo