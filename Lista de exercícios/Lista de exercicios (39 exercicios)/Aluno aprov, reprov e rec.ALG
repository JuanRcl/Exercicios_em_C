algoritmo "Aprov, reprov e rec"
var
nome : caractere
n1, n2,n3, media : real
inicio
escreva("Informe o nome do aluno: ")
  leia(nome)
escreva("Informe as 3 notas do aluno: ")
  leia(n1, n2, n3)
media<-(n1+n2+n3)/3
se media >=7 entao
  escreva("O aluno ",nome," esta aprovado")
senao
  se media<=5 entao
    escreva("O aluno ",nome, " esta reprovado")
  senao
    escreva("O aluno ",nome, " esta de recuperacao")
fimse
  fimse
fimalgoritmo