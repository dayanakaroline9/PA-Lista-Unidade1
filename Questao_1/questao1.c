#include <stdio.h>

int main(void) {
  //definindo variaveis 
  int i=3,j=5;

  //definindo ponteiros
  int *p, *q;
  p = &i; //recebe o endereço de i
  q = &j; //recebe o endereço de j

  //recebe 1 ( verdadeiro )
  int s1 = p == &i;
  printf("p == &i = %d\n", s1);

  //recebe o resultado da subtração entre o valor de p e o valor de q, que é s2 = 3-5 = -2.
  int s2 = *p - *q;
  printf("*p - *q = %d\n",s2);

  //recebe 3 - (3/5) + 7 = 3 - 0 + 7 = 10
  int s3 = 3 - *p/(*q) + 7;
  printf("3 - *p/(*q) + 7 = %d\n",s3);
  
  return 0;
}
