#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 10

void multiplicar(float x[MAX][MAX], int linhas, int colunas);
void multiplicarnova(float** x, int linhas, int colunas);

int main ()
{
int linhas, colunas, linhasnovas, colunasnovas, escolha, tipodados, testeparaversejafoialterada = 69;
char YN;
float** matriznova;
do
{
    printf("Criar matriz\n");
    printf("Insira a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("Insira a quantidade de colunas: ");
    scanf("%d", &colunas);
}while (linhas<0 || linhas>MAX || colunas<0 ||colunas>MAX);

float matriz[linhas][colunas];

for(int i=0; i<linhas ; i++)
{
    for (int j=0;j<colunas; j++)
    {
        printf("Insira o valor para o %d elemento da %d linha: ", j+1,i+1);
        scanf("%f", &matriz[i][j]);
    }
}

printf("Matriz escolhida:\n");
for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        printf("%.1f\t", matriz[i][j]);
    }
    printf("\n");
}

do
{
printf("Menu: \n1----> Aumentar/diminuir Matriz\n2----> Teste de simetria\n3----> Calculo do traco");
scanf("%d", &escolha);
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
if(escolha == 1)
{
testeparaversejafoialterada = 0;
do
{   
    printf("\nInsira a nova quantidade de linhas: ");
    scanf("%d", &linhasnovas);
    printf("Insira a nova quantidade de colunas: ");
    scanf("%d", &colunasnovas);    
}while (linhasnovas<0 || linhasnovas>MAX || colunasnovas<0 || colunasnovas>MAX);
//------------------------------INICIO----------------------------------------------
//---------GUARDAR------------------
int contaux = 0;
float aux[MAX*MAX];
for(int i = 0;i<MAX*MAX;i++)
{
    aux[i] = 69.0;
}
for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        aux[contaux] = matriz[i][j];
        contaux++;
    }
}
//--------Realocacao de matriz--------------------------------
matriznova = (float**) malloc(linhasnovas * sizeof(float));
for (int i = 0; i < linhasnovas; i++)
{
    matriznova[i] = (float*) malloc(colunasnovas * sizeof(float));
}
//--------Reposicao de valores antigos------------------------
contaux = 0;
for(int i = 0; i < linhasnovas; i++)
{
    for(int j = 0; j < colunasnovas; j++)
    {
        matriznova[i][j] = aux[contaux];
        contaux++;
    }
}
//---------------Acrescentar valores--------------------------------
if (linhasnovas*colunasnovas>linhas*colunas)
{
contaux = 0;
printf("\nA nova matriz e maior do que a antiga, deseja acrescertar novos valores? Y / N: ");
scanf(" %c", &YN);
if(YN =='y' || YN=='Y')
{
    for (int i = 0; i < linhasnovas; i++)
    {
        for (int j = 0; j < colunasnovas; j++)
        {
            if(matriznova[i][j] == 69.0)
            {
                printf("Insira o valor para a %d linha e %d coluna", i+1, j+1);
                scanf("%f", &matriznova[i][j]);
            }
            
        }
    }
}
}
printf("\nMatriz nova: \n");
for(int i = 0; i < linhasnovas; i++)
{
    for(int j = 0; j < colunasnovas; j++)
    {
        printf("%.1f\t", matriznova[i][j]);
    }
    printf("\n");
}
printf("\n");
}
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
if(escolha == 2)
{
if(testeparaversejafoialterada == 0)
{
int i;
for ( i = 0; i < linhasnovas; i++)
{
    for (int j = 0; j < colunasnovas; j++)
    {
        if(linhas==colunas)
        {
            if(!(matriznova[i][j]==matriznova[j][i]))
            {
                printf("\nA matriz nao e simetrica\n\n");
                i = linhasnovas+1;
            }
            
        }
    }
}
if(i==linhasnovas)
printf("\nA matriz e simetrica\n\n");
}
else
{
int i;
for ( i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        if(linhas==colunas)
        {
            if(!(matriz[i][j]==matriz[j][i]))
            {
                printf("\nA matriz nao e simetrica\n\n");
                i = linhas+1;
            }
            
        }
    }
}
if(i==linhas)
printf("\nA matriz e simetrica\n\n");
}
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
}
if(escolha == 3)
{
if(testeparaversejafoialterada == 0)
{
    int soma = 0;
    for (int i = 0; i < linhasnovas; i++)
    {
        for (int j = 0; j < colunasnovas; j++)
        {
            if(j==i)
            {
                soma += matriznova[i][j];
            }
        }
    }
    printf("\nCalculo do traco: %d\n", soma);
}
else
{
    int soma = 0;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if(j==i)
            {
                soma += matriz[i][j];
            }
        }
    }
    printf("\nCalculo do traco: %d\n", soma);
}
}
if(escolha == 4)
{
    if(testeparaversejafoialterada == 0)
    {
        multiplicarnova(matriznova, linhasnovas, colunasnovas);
    }
    else
    {
        multiplicar(matriz, linhas, colunas);
    }
}
}while(1);
}

void multiplicar(float x[MAX][MAX], int linhas, int colunas)
{
float amultiplicar[MAX][MAX];
float multiplicada[linhas][linhas];
for (int i = 0; i < colunas; i++)
{
    for (int j = 0; j < linhas; j++)
    {
        printf("insira o %d elemento da %d linha", j+1, i+1);
        scanf("%f", &amultiplicar[i][j]);
    }
}
int i, j, soma, col2;
for(i = 0; i < linhas; i++)
{   
    for (col2 = 0; col2 < linhas; col2++)
    {   
        soma = 0;
        for(j = 0; j < colunas ; j++)
        {
            soma += x[i][j]*amultiplicar[j][col2];
        }
        multiplicada[i][col2] = soma;
    }
}
printf("Matriz Multiplicada: \n");
for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < linhas; j++)
    {
        printf("%.1f\t", multiplicada[i][j]);
    }
    printf("\n");
}
}

void multiplicarnova(float** x, int linhas, int colunas)
{
float amultiplicarnova[MAX][MAX];
float multiplicadanova[linhas][linhas];
for (int i = 0; i < colunas; i++)
{
    for (int j = 0; j < linhas; j++)
    {
        printf("insira o %d elemento da %d linha", j+1, i+1);
        scanf("%f", &amultiplicarnova[i][j]);
    }
}
int i, j, soma, col2;
for(i = 0; i < linhas; i++)
{   
    for (col2 = 0; col2 < linhas; col2++)
    {
        soma = 0;
        for(j = 0; j < colunas ; j++)
        {
            soma += x[i][j]*amultiplicarnova[j][col2];
        }
        multiplicadanova[i][col2] = soma;
    }
}
printf("Matriz Multiplicada: \n");
for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < linhas; j++)
    {
        printf("%f\t", multiplicadanova[i][j]);
    }
    printf("\n");
}
}