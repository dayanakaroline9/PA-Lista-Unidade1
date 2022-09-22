
p aponta para o endereço de memória da variável i 
logo, a expressão p == &i tem como resultado o valor 1 (true)

*p acessa o valor armazenado na memória no endereço de i e o *q acessa o valor armazenado no endereço de j, logo a expressão (*p - *q) tem como resultado a subtração entre 3 e 5 que é igual a -2 

**&p acessa o valor do endereço de p , que está apontando para o endereço de i, que guarda o valor 3

A expressão (3 - *p / (*q) + 7) realiza a operação de divisão entre os valores de *p e *q, ou seja, ⅗,
como são inteiro o resultado dessa operação é zero, assim o resultado final da expressão é 3 - 0 + 7 = 10.

