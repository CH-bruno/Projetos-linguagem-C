#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,        /* guarda o numero dado */
    i,
    nfat;

  printf("\n\tCalculo do fatorial de um numero\n");
  printf("\nDigite um inteiro nao-negativo: ");
  scanf("%d", &n);

  /* inicializacoes */
  nfat = 1;

  for (i = n; i > 1; i--)
    {  /* as chave sao superfluas */
      nfat = nfat * i;
    }

  printf("O valor de %d!= %d\n", n, nfat);


    return 0;
}
