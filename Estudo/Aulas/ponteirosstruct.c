#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[20];
    int idade;
    float salario;
}Pessoa;

void ler(Pessoa* a)
{
    printf("Nome: ");
    scanf("%s", (*a).nome);
    printf("Salario: ");
    scanf("%f", &(*a).salario);
    printf("Idade: ");
    scanf("%d", &(*a).idade);
}
void escrever(Pessoa a)
{
    printf("Nome: %s\n", a.nome);
    printf("Salario: %f\n", a.salario);
    printf("Idade: %d\n", a.idade);
}

int main()
{
    char nome[20] = "ola";
    Pessoa a;
    ler(&a);
    escrever(a);
    printf("%d", strlen(nome));
}