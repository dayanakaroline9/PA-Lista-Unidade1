  ```/* (a) */
  valor = 10;
  p1 = &valor; //armazena o valor que esta no endereço da variavel valor
  *p1 = 20;  //muda o valor do ponteiro *p1 para 20
  printf("%d \n", valor);   //valor esperado é 20
  ```
  
  ```/* (b) */
  temp = 26.5;
  p2 = &temp; //armazena em p2 o valor que estar no endereço de memoria de temp
  *p2 = 29.0; //muda o valor do ponteiro para 29.0
  printf("%.1f \n", temp);   //valor esperado é 29
  ``` 
  
  ```/* (c) */
  p3 = &nome[0]; //acessa o caractere "P"
  aux = *p3; //armazena o valor de P3 em aux
  printf("%c \n", aux);  //espera caractere P
  ```
  
  ```
  /* (d) */
  p3 = &nome[4]; //acessa o caractere "e" que está na posição 4 
  aux = *p3; //guarda "e" em aux
  printf("%c \n", aux);   //espera caractere "e"
  ```
  
  ```
  /* (e) */
  p3 = nome;//acessa primeira posição da memória onde esta o caractere P
  printf("%c \n", *p3);   //espera o caractere "P"
  ```
  
  ```
  /* (f) */
  p3 = p3 +4; //vai da posição zero ate a posição 4
  printf("%c \n", *p3);   //espera caractere "e"
  ```
  
  ```
  /* (g) */
  p3--; //vai da posição 4 para a posição 3 ( diminui 1)
  printf("%c \n", *p3);     //espera caractere t
  ```
  
  ```
  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor; //posição zero
  idade = *p4; //guarda em idade o valor de p4 que é 31
  printf("%d \n", idade);     //valor esperado é 31
  ```
  
  ```
  /* (i) */  
  p5 = p4 +1;//posição 5
  idade = *p5; //guarda o valor da posição 1, que é 45
  printf("%d \n", idade);     //espera valor 45
  ```
  
  ```  
  /* (j) */  
  p4 = p5 +1; //posição 5
  idade = *p4; //guarda valor 27
  printf("%d \n", idade);    //espera 27
  ```
  
  ```
   /* (l) */  
  p4 = p4 -2; //posição p4 esta em zero, logo continua
  idade = *p4;//idade = 31
  printf("%d \n", idade);  //espera valor 31
  ```
  
  ```
  /* (m) */
  p5 = &vetor[2] - 1; //posição 1 de vetor
  printf("%d \n", *p5);   //espera valor 45
  ```
  
  ```
  /* (n) */
  p5++; //posição 2 de vetor
  printf("%d \n", *p5);   //espera valor 27
  ```

