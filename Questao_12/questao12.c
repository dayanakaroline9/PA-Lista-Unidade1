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
