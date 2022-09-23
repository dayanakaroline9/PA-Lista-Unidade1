#include <stdio.h>
#include <stdlib.h>

//função comparador
//recebe dois ponteiros 
int comparador(const void *a, const void *b) {
  //compara se o valor de *b é menor que *a
   if(*(float*)a < *(float*)b){
     //retorna -1, a vem antes
     return -1;
   }else{
     //compara de *a é igual a *b
     if(*(float*)a == *(float*)b){
       //retorna 0, são iguais
       return 0;
     }
     //retorna 1, a vem depois
     return 1;
   }
}

int main(void) {
  //recebendo o tamanho do vetor
  int n;
  printf("Digite quantos numeros serão ordenados:\n");
  scanf("%d",&n);
  //criando o vetor como ponteiro
  float *x;

  //alocando vetor
  x = malloc(n*sizeof(float));

  //preenchendo vetor
  for(int i=0; i<n; i++){
    scanf("%f",&x[i]);
  }

  //mostrando vetor antes da aordenação
  printf("\n");
  for(int i=0; i<n; i++){
    printf("%f ",x[i]);
  }

  //chamando a função qsort, passando o vetor , o tamanho do vetor, o tamanho do tepi em bytes e a função que indica como deve ocorrer a comparaçaõ para ordenar
  qsort(x, n, sizeof(float), comparador);

  //mostrando vetor ordenado
  printf("\n");
  for(int i=0; i<n; i++){
    printf("%f ",x[i]);
  }

  //liberando memoria alocada
  free(x);

  return 0;
}
