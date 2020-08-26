#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,k,potencia,contador;
printf("Digite o numero da base:\n");
scanf("%d",&n);
printf("Digite o numero do expoente:\n");
scanf("%d",&k);
potencia=1;
contador=0;
while(contador!=k){
    potencia*=n;
    contador+=1;
}
printf("o valor de %d elevado a %d : %d",n,k,potencia);
    return 0;
}
