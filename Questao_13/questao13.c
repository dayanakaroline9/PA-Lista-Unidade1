#include <stdio.h>
#include <stdlib.h>

//função troca
//recebe dois ponteiros para float e troca os valores
void troca (float *a, float *b){
  float aux = *a;
  *a = *b;
  *b = aux;
}

//função ordena
//recebe um array alocado de forma dinamica e o tamanho do array
//percorre o array e compara qual menor valor entre dois e troca , ordenando o array de forma crescente
void ordena (float *x, int n){
  for(int i=n-1;i>=1;i--){
    for(int j=0;j<i;j++){
      //acessa o valor caminhando na memoria
      if(*(x+i)<*(x+j)){
        //troca recebe o endereço do valor acessado
        troca(&*(x+i),&*(x+j));
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

  //chamando a função ordena, passando o vetor e o tamanho
  ordena (x, n);

  //mostrando vetor ordenado
  printf("\n");
  for(int i=0; i<n; i++){
    printf("%f ",x[i]);
  }

  //liberando memoria alocada
  free(x);

  return 0;
}
