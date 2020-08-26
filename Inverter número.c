#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,cifra;
printf("Digite um numero inteiro:\n");
scanf("%d",&n);
if(n>=0){
do{
    cifra=n%10;
    printf("%d",cifra);
    n/=10;}
    while(n!=0);
    printf("\n");
    }

    else if (n<1){
     n*=-1;
     printf("\n");
        do{
    cifra=n%10;
    printf("%d",cifra);
    n/=10;
    }
while(n!=0);
printf("\n");
    }
    return 0;
}
