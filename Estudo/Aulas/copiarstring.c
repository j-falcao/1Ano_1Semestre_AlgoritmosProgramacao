#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* alocar(char* palavra);

/* int main()
{
    char palavra[20], palavra2[30];
    printf("escreva uma palavra: ");
    scanf("%s", palavra);

    printf("escreva utra palavra: ");
    scanf("%s", palavra2);

    strcpy(palavra, palavra2);

    printf("%s", palavra);
} */

int main()
{
    char palavra[20];
    printf("Escreva uma palavra: ");
    scanf("%s", palavra);
    char *palavraresultante = alocar(palavra);
    printf("%s", palavraresultante);
}

char* alocar(char *palavra)
{
    char palavra2[30];
    printf("Escreva outra palavra: ");
    scanf("%s", palavra2);

    char* tmp = (char*) malloc(strlen(palavra)+strlen(palavra2)+1);
    int cont = 0;
    for(int i=0;i<strlen(palavra)+strlen(palavra2)+1;i++)
    {
        if(i<strlen(palavra))
        tmp[i] = palavra[i];
        else
        {
        tmp[i] = palavra2[cont];
        cont++;
        }
    }
    return tmp;
}

