```
 float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet; //aponta para vet na posição zero = 1.1
  
  printf("contador/valor/valor/endereco/endereco");
  
//repete 4 vezes
  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d ;",i); //mostra o contador de 0 ate 3
    printf("vet[%d] = %.1f ;",i, vet[i]); //mostra o valor do vetor na posição i
    printf("*(f + %d) = %.1f ;",i, *(f+i));//percorre o vetor mostrando os valores atraves da soma usando o ponteiro f
    printf("&vet[%d] = %X ;",i, &vet[i]); //mostra o endereço na memoria onde o valor do vetor na posição i foi armazenado.
    printf("(f + %d) = %X; ",i, f+i);//mostra o endereço da memoria que aponta para o vetor usando a soma com o ponteiro f
  }
```

