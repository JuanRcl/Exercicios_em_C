algoritmo "Nome do vendedor"
var
qtdv : inteiro
nomev: caractere
salariof : real
totalv : inteiro
salarioc : real
salariom : real
i : inteiro
inicio
  escreva("Informe o nome do vendedor: ")
  escreval()
    leia(nomev)
  escreva("Informe o salario fixo do vendedor: ")
    leia(salariof)
  escreva("Informe a venda total feita pelo vendedor: ")
    leia(totalv)
       salarioc <- (salariof*0.15)
       salariom <- (salariof+salarioc)
     escreval()
       escreval("A seguir, o valor que deve ser pago aos vendedores")
     escreval()
     escreval("O vendedor ",nomev, " tem um salario fixo de ",salariof," reais")
     escreval("E com a suas vendas irá receber ",salariom," por mes")

fimalgoritmo