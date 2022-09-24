#include <stdio.h>
#include <stdlib.h>

//função troca
//recebe dois ponteiros para float e troca os valores
void troca (float *a, float *b){
  float aux = *a;
  *a = *b;
  *b = aux;
}

//Função ordena
//recebe o vetor, o tamanho do vetor, e o ponteiro para função de troca
void ordena(float *x, int n, void (*pf)(float*,float*)){
  for(int i=n-1;i>=1;i--){
    for(int j=0;j<i;j++){
      if(*(x+i)<*(x+j)){
        pf(&*(x+i),&*(x+j));
      }
    }
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

  //criando ponteiro que aponta para a função troca
  int (*pf) (float*,float*) =  &troca;

  //chamando a função ordena, passando o vetor , o tamanho do vetor, e o ponteiro para função
  ordena(x, n , pf);

  //mostrando vetor ordenado
  printf("\n");
  for(int i=0; i<n; i++){
    printf("%f ",x[i]);
  }

  //liberando memoria alocada
  free(x);

  return 0;
}
