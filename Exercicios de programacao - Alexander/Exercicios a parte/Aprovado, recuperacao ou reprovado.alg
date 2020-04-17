algoritmo "treino"
var
media, n1, n2, n3 : real
inicio
escreva("Digite a nota 1: ")
leia (n1)
se (n1<0) ou (n1>10) entao
   escreva("As notas devem ser de 0 a 10")
senao
   escreva("Digite a nota 2: ")
   leia (n2)
   escreva("Digite a nota 3: ")
   leia (n3)
   media := (n1+n2+n3)/3;
   se (media>=5) entao
      escreva("Parabéns, você foi aprovado, sua média foi",media)
   senao
      se (media>=3) entao
         escreva("Recuperação, sua média foi",media)
      senao
         escreva("Reprovado, sua média foi",media)
      fimse
   fimse
fimse

fimalgoritmo
