#include <stdio.h>
#include <time.h>     
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

// função principal para encontrar o tempo de execução de um programa em C
int main()
{
    // para armazenar o tempo de execução do código
    double tempo = 0.0;
 
    clock_t inicio = clock();
 
    //executa o codigo de ordenação
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
  void (*pf) (float*,float*) =  &troca;

  //chamando a função ordena, passando o vetor , o tamanho do vetor, e o ponteiro para função
  ordena(x, n , pf);

  //mostrando vetor ordenado
  printf("\n");
  for(int i=0; i<n; i++){
    printf("%f ",x[i]);
  }

  //liberando memoria alocada
  free(x);
 
    clock_t fim = clock();
 
    // calcula o tempo decorrido encontrando a diferença (final - inicio) e
    // dividindo a diferença por CLOCKS_PER_SEC para converter em segundos
    tempo += (double)(fim - inicio) / CLOCKS_PER_SEC;
 
    printf("\nO tempo é %f segundos", tempo);
 
    return 0;
}
