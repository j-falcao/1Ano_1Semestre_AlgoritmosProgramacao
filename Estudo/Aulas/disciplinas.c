#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *nome;
    int Id;
} Disciplina;

void extrairdisciplinadotxteguardarnvetor(Disciplina *disciplinas, int *n)
{
    FILE *arquivo;
    arquivo = fopen("disciplinas.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo");
        exit(1);
    }
    for (int i = 0 ;; i++)
    {   if (feof(arquivo))
            break;
        fscanf(arquivo, "%d", &disciplinas[i].Id);
        fscanf(arquivo, "%s", disciplinas[i].nome);
        *n = *n + 1;
    }
    fclose(arquivo);
    for(int i=0;i<n;i++)
    {
        printf("%d", disciplinas[i].Id);
        printf("%s", disciplinas[i].nome);
    }
}
    