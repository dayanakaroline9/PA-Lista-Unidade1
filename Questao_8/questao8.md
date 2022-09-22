```
int main(){   
    int vet[] = {4,9,13};   
    int i;  
    for(i=0;i<3;i++){   
            printf("%d ",*(vet+i));   
    } 
}
```

o código acima percorre e imprime os valores do vetor através da soma usando a definição de ponteiro

```
int main(){  
     int vet[] = {4,9,13};   
     int i;   
     for(i=0;i<3;i++){   
         printf("%X ",vet+i);   
     } 
}
```

o código acima percorre o vetor mostrando o endereço da memória onde o vetor está armazenado somando mais i

