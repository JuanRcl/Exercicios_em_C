algoritmo "Homem e mulher"
var
i, j, h : inteiro
nome, sexo : caractere
inicio
para i de 1 ate 5 faca
escreval("Informe seu nome: ")
  leia(nome)
escreval("Informe o sexo M ou F: ")
  leia(sexo)
se (sexo = "M") entao
  escreval(nome," é homem")
senao
  escreval(nome," é mulher")
fimse
  se (sexo = "M") entao
    h<-h+1
    senao
     se (sexo = "F") entao
        j<-j+1
  fimse
    fimse
fimpara
escreval("O total de homens é de ",h," homens e de ",j," mulheres")
fimalgoritmo
