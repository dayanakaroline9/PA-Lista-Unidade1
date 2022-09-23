**Declarando o vetor do tipo char**

```
#include <stdio.h>

int main(void) {
  char x[4]; 
  printf("Endereço de X[0]=%d\n",x); 
  printf("Endereço de X[1]=%d\n",x+1); 
  printf("Endereço de X[2]=%d\n",x+2); 
  printf("Endereço de X[3]=%d",x+3); 
  return 0;
}
```

Saida do programa:

```
Endereço de X[0]=1353202732
Endereço de X[1]=1353202733
Endereço de X[2]=1353202734
Endereço de X[3]=1353202735
```

Na saida do programa é possivel notar que o endereço modifica apenas o ultimo numero variando de 1 em 1, isso significa que variou 1 bit em cada operação



**Declarando vetor do tipo int**

```
#include <stdio.h>

int main(void) {
  int x[4];
  printf("Endereço de X[0]=%d\n",x); 
  printf("Endereço de X[1]=%d\n",x+1);
  printf("Endereço de X[2]=%d\n",x+2);
  printf("Endereço de X[3]=%d",x+3); 
  return 0;
}
```

Saida do programa:

```
Endereço de X[0]=724365872
Endereço de X[1]=724365876
Endereço de X[2]=724365880
Endereço de X[3]=724365884
```


Na saida do programa é possivel notar que o o endereço modifica os dois ultimos numeros variando de 4 em 4, isso significa que variou 4 bit em cada operação, ou seja, não esta variando apenas 2 bits como previsto no exemplo do endereço 4092.

**Declarando o vetor do tipo float**

```
#include <stdio.h>

int main(void) {
  float x[4]; 
  printf("Endereço de X[0]=%d\n",x); 
  printf("Endereço de X[1]=%d\n",x+1);
  printf("Endereço de X[2]=%d\n",x+2); 
  printf("Endereço de X[3]=%d",x+3);
  return 0;
}
```

Saida do programa:

```
Endereço de X[0]=902474336
Endereço de X[1]=902474340
Endereço de X[2]=902474344
Endereço de X[3]=902474348
```

Analizando a saida do problema, percebe-se uma variação de 4 em 4 bits como esperado para o tipo float.

**Declarando vetor do tipo double**

```
#include <stdio.h>

int main(void) {
  double x[4]; 
  printf("Endereço de X[0]=%d\n",x); 
  printf("Endereço de X[1]=%d\n",x+1);
  printf("Endereço de X[2]=%d\n",x+2); 
  printf("Endereço de X[3]=%d",x+3);
  return 0;
}
```

Saida do programa:

```
Endereço de X[0]=512974688
Endereço de X[1]=512974696
Endereço de X[2]=512974704
Endereço de X[3]=512974712
```

Analizando a saida do problema, percebe-se uma variação de 8 em 8 bits como esperado para o tipo double.

