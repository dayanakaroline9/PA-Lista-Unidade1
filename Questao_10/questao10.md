Para o vetor declarado como caractere, sabendo que as variaveis do tipo char ocupa apenas 1 bit na memoria,
se o endereço de memoria for 4092 para X[0],as operações x+1 pula de 1 em 1 bit

```
x[0] = 4092
x+1 = 4093
x+2 = 4094
x+3 = 4095
```

Para o vetor declarado como inteiro, assumindo que uma variavel do tipo int ocupa 2 bits na memoria, 
a expressão x+1 pula 2 bits e vai para 4094, conforme prevê abaixo o resultado das operações:

```
x[0] = 4092
x+1 = 4094
x+2 = 4096
x+3 = 4098
```

Como as variaveis declaradas do tipo float ocupa 4 bits na memoria, 
assim a operação x+1 pula de 4 em 4 bits,para o caso do endereço de x[0] ser 4092
as expressões tem os seguintes resultados:


```
x[0] = 4092
x+1 = 4096
x+2 = 4100
x+3 = 4104
```

Como as variaveis declaradas do tipo double ocupa 8 bits na memoria, 
assim a operação x+1 pula de 8 em 8 bits na memoria para o caso do endereço de x[0] ser 4092:


```
x[0] = 4092
x+1 = 4100
x+2 = 4108
x+3 = 4116
```



