```p = i;
q = &j;
p = &*&i;
i = (*&)j;
i = *&j;
i = *&*&j;
q = *p;
i = (*p)++ + *q;
```

Como p é um ponteiro e i é uma variável do tipo inteiro, essa expressão “p = i;” é inapropriada, pois o ponteiro p espera receber um valor de endereço.

A expressão (*&)j o uso dos parênteses está incorreto, o correto seria *&j tudo junto, para acessar o valor que está no endereço de j, que é  o 5.

A expressão q=*p é inapropriada pois o ponteiro q espera receber um valor de endereço, o correto seria q = &p por exemplo, ou *q = *p, que seria o valor de *q é igual ao valor de *p ou o endereço de q está apontando para o endereço de p, da forma como esta, é inapropriado.
