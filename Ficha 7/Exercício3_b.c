#include<stdio.h>
#define MAX 10

typedef struct{
    int numero;
    char nome[20];
    int nota;
}aluno;

void RegistoAluno(aluno v[]);
void PesquisaAluno(aluno v[]);

int main()
{
int escolha;
aluno alunos[MAX];

for (int i = 0; i < MAX; i++)
{
    alunos[i].numero = 99;
}

do
{
printf("Menu:\n 1----> Adicionar aluno\n 2----> Pesquisar aluno");
scanf("%d", &escolha);

if(escolha == 1)
    RegistoAluno(alunos);
else if(escolha == 2)
   PesquisaAluno(alunos);
}while(1);
}

void RegistoAluno(aluno v[])
{
int qt_alunos;
printf("Quantos alunos quer adicionar?: ");
scanf("%d", &qt_alunos);
for(int i=0;i<qt_alunos;i++)
{
    if(v[i].numero == 99)
    {
        printf("Digite o numero do aluno %d: " , i+1);
        scanf("%d", &v[i].numero);
        printf("Digite o nome do aluno %d: " , i+1);
        scanf("%s", v[i].nome);
        printf("Digite a nota do aluno %d: " , i+1);
        scanf("%d", &v[i].nota);
        printf("\n");
    }
}
printf("\n"); 
printf("Aluno(s) registado(s) com sucesso!\n\n");  
}

void PesquisaAluno(aluno v[])
{
    int recolha, a = 0, i;
do{
    printf("Escolha o numero de um aluno: ");
    scanf("%d", &recolha);

    for(i=0;i<MAX;i++)
    {
        if(v[i].numero == recolha)
        {
        a++;
        break;
        }
    }
}while(a==0);
printf("Aluno encontrado:\n");
printf("\nNumero: %d\n" , v[i].numero);
printf("Nome: %s\n", v[i].nome);
printf("Nota: %d\n\n" , v[i].nota);
}



//TESTES----------------------------------------------------------------
   /* printf("%d ", &alunos[0].nome);                                         
    printf("%d ", &alunos[0].nota);
    printf("\n"); 
    printf("%d ", &alunos[1].numero);
    printf("%d ", &alunos[1].nome);
    printf("%d ", &alunos[1].nota);
    printf("%d", sizeof(alunos[0]));
    printf("%s", *(alunos)); */
