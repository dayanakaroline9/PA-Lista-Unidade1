```
int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
```


Se o endereço que i está reservando é o 4094, o ponteiro p aponta para o endereço 4094, logo em p, aparece o endereço de i.

O ponteiro p aponta para i, que guarda o valor 5, então mostrando *p+2 = 5+2 = 7.

A expressão **&p mostra o valor que está armazenado no endereço 4094, que é o endereço de i, logo aparece o numero 3.

A expressão 3* *p calcula a multiplicação de 3 vezes o valor que está guardado no endereço de i, que é o valor 3, logo 3 * *p = 3*3 = 9.

A expressão **&p é igual a 3, como expliquei antes, então, **&p + 4 = 3 + 4 = 7 .

