Para calcular o tempo de execução do programa de ordenação, foi usada a função clock() da biblioteca <time.h>
Esta função retorna um valor de tiques que serão coletados no inicio e fim do programa, a fim de calcular o 
tempo que o programa levou para executar

Para isso foi desenvolvido o seguinte programa, a fim de saber o tempo que leva para executar o programa de ordenação de 
vetor usando o ponteiro para função, e usando a função normal, que são as questões 15 e 13 respectivamente.

**Código de ordenação com uso de ponteiro para função**
```
#include <stdio.h>
#include <time.h>       // for clock_t, clock(), CLOCKS_PER_SEC
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
```


Saida do programa: 

```
5.000000 4.000000 3.000000 2.000000 1.000000 
1.000000 2.000000 3.000000 4.000000 5.000000 
O tempo é 0.000345 segundos
```

**Código de ordenação sem ponteiro para função**

```
#include <stdio.h>
#include <time.h>       // for clock_t, clock(), CLOCKS_PER_SEC
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

  //chamando a função ordena, passando o vetor e o tamanho
  ordena (x, n);

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
```

Saida do programa:

```
5.000000 4.000000 3.000000 2.000000 1.000000 
1.000000 2.000000 3.000000 4.000000 5.000000 
O tempo é 0.000456 segundos
```



Para o programa com o uso do ponteiro para função o tempo foi de 0.000345 segundos, ja para o uso com a função sem o ponteiro, o tempo de execução foi de 0.000456. Os dois tivem tempos bem proximos, mas usando o ponteiro para função, otimisou o tempo com relação ao codigo tem o ponteiro.
