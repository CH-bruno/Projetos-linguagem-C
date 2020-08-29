#include <stdio.h>
#include <stdlib.h>

int main() {

  int n,soma;
  printf("Digite um numero:\n");
  scanf("%d",&n);
  soma=0;

  while(n>0)
  {
    soma+=n%10;
    n/=10;
  }

  printf("A soma dos digitos desse numero:%d\n",soma);
  return 0;

}
