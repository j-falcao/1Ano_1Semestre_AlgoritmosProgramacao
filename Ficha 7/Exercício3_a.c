#include<stdio.h>



int main()
{
    int N, recolha, a=0;
    typedef struct{
        int numero;
        char nome[20];
        int nota;
    }aluno;

    do
    {
        printf("Insira a quantidade de alunos: ");
        scanf("%d",&N);  
    } while (N <= 0 || N > 50);

    aluno alunos[N];
    

    for(int i=0;i<N;i++)
    {
        printf("Digite o numero do aluno %d: " , i);
        scanf("%d", &alunos[i].numero);
        printf("Digite o nome do aluno %d: " , i);
        scanf("%s", alunos[i].nome);
        printf("Digite a nota do aluno %d: " , i);
        scanf("%d", &alunos[i].nota);
        printf("\n");
    }
    printf("\n");

    do{
    printf("Escolha o numero de um aluno: ");
    scanf("%d", &recolha);

    for(int i=0;i<N;i++)
    {
        if(alunos[i].numero == recolha)
        {
        printf("Numero: %d\n" , alunos[i].numero);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Nota: %d\n2" , alunos[i].nota);
        a++;
        }
    }
}while(a==0);
}