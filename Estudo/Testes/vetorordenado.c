#include <stdio.h>
#include <stdlib.h>

int main ()
{   
    int n, i, j, aux, *vetor, contPar=0, contImpar=0;
    printf("insira o tamanho do vetor: ");
    scanf("%d", &n);
    vetor = (int*) malloc(n*sizeof(int));
    for (i=0; i<n; i++){
        printf("insira o valor do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    for (i=0; i<n; i++){
        if(vetor[i]%2 == 0){
            aux = vetor[contPar];
            vetor[contPar] = vetor[i];
            vetor[i] = aux;
            contPar++;
        }
        else
            aux = vetor[n-1-contImpar];
            vetor[n-1-contImpar] = vetor[i];
            vetor[i] = aux;
            contImpar++;
        }

}
    for (int i=0; i<n/2; i++){
        if(vetor[i] > vetor[n+1]){
            aux = vetor[i];
            vetor[i] = vetor[n-1-i];
            vetor[n-1-i] = aux;
        }
    }
    
}