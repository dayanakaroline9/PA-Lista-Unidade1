```
float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;
```

```
aloha[2] = value;
```
O comando acima é valido pois quarda na posição 2 do vetor o valor 2.2

```
scanf("%f", &aloha);
```
O comando a cima é invalido, pois o printf espera imprimir um valor do tipo float e recebe um ponteiro

```
aloha = value";
```
O comando acima é invalido, pois a sintaxe esta errada pelo uso da " no final do comando.


```
printf("%f", aloha);
```
o comando acima esta errado pois espera um valor do tipo float e recebe um double

```
coisas[4][4] = aloha[3];
```
O comando acima é valido, pois guarda na linha 4 e coluna 4 da matriz coisas, o valor da posição 3 do vetor aloha


```
coisas[5] = aloha;
```
O comando é invalido, pois tenta acessar a posição da matriz coisas mas não passa o valor referente a coluna, assim da erro no codigo.


```
pf = value;
```
O comando esta incorreto, pf é um ponteiro, espera um valor de endereço de memoria, porem recebe um valor do tipo float

```
pf = aloha;
```
O comando valido, pf aponta para o enredeço do vetor aloha[0]


