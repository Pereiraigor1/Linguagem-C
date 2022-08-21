Algoritmo "Resposta para Bhaskara"

var

a,b,c,delta,X1,X2: real

inicio
      escreva("Escreva o valor de A da equação: ")
      leia(a)
      escreva("Escreva o valor de B da equação: ")
      leia(b)
      escreva("Escreva o valor de C da equação: ")
      leia(c)
      delta <-(exp(b,2)-(4*a*c))
      X1 <- (-b+RaizQ(delta))/(2*a)
      X2 <- (-b-RaizQ(delta))/(2*a)
      escreva("Os valores de X1 E X2, são, respectivamente: ",X1," e ",X2)

fimalgoritmo