algoritmo "Nome do vendedor"
//1-Ler o nome do vendedor 2-salario fixo 3-total de vendas feitas por ele
//no mes
//4-ganha 15% em cada venda 5- escrever nome 6-salario fixo
//7-salario fim de mes
var
qtdv : inteiro
nomev: caractere
salariof : real
totalv : inteiro
salarioc : real
salariom : real
i : inteiro
inicio
  escreva("Informe quantos vendedores tem na loja: ")
  escreval()
    leia(qtdv)
  i <- 0
  enquanto i<qtdv faca
     escreva("Informe o nome do vendedor: ")
       leia(nomev)
     escreva("Informe o salario fixo do vendedor: ")
       leia(salariof)
     escreva("Informe a venda total feita pelo vendedor: ")
       leia(totalv)
       salarioc <- (salariof*0.15)
       salariom <- (salariof+salarioc)
     i <- i+1
  fimenquanto
     escreval()
       escreval("A seguir, o valor que deve ser pago aos vendedores")
     escreval()
     escreval("O vendedor ",nomev, " tem um salario fixo de ",salariof," reais")
     escreval("E com a suas vendas irá receber ",salariom," por mes")
     
fimalgoritmo




