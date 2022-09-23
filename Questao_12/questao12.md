O ponteiro para função serve para armazenar onde as funções ficam na memoria virtual, guardando um seguimento de codigo.
A sua utilidade é usar o ponteiro como se fosse a propria função.

O exemplo abaixo tem uma função que calcula a porcentagem de y com relação a x.


```
#include <stdio.h>

int porcentagem (int x , int y){
  int z = (y*100)/x;
  return z;
}

int main(void) {
  int (*pf) (int,int) = &porcentagem;

  int x = 150;
  int y = 75;

  printf("%d é %d%% de %d",y,pf(x,y),x);
  
  return 0;
}

```


O ponteiro ***pf** foi declarado para receber o endereço da função que recebe dois inteiros e devolve um inteiro

em seguinda é exibido na saida a relação de porcentagem entre x e y, usando o ponteiro *pf passando os dois valores, x e y, como paramentros da função.
