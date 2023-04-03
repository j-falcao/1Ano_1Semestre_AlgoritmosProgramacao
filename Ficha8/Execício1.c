#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

void lermatriz(int m[MAX][MAX], int linhas , int colunas);
int* aumentardiminuir(int m[MAX][MAX], int l, int c, int linhas, int colunas);
void simetria(int m[MAX][MAX], int linhas, int colunas);
void calculodotraco(int m[MAX][MAX], int linhas, int colunas);

int main()
{
int linhas, colunas, escolha;
char YN;
do
{
printf("Criar matriz\n");
printf("Insira a quantidade de linhas: ");
scanf("%d", &linhas);
printf("Insira a quantidade de colunas: ");
scanf("%d", &colunas);
}while (linhas<0 || linhas>MAX || colunas<0 ||colunas>MAX);


int matriz[MAX][MAX], linhasnovas, colunasnovas;

lermatriz(matriz, linhas, colunas);
printf("Matriz escolhida:\n");
for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        printf("%d\t", matriz[i][j]);
    }
    printf("\n");
}
do
{
printf("Menu: \n1----> Aumentar/diminuir Matriz\n2----> Teste de simetria\n3----> Calculo do traco");
scanf("%d", &escolha);
if(escolha == 1)
{
do
{   
    printf("Insira a nova quantidade de linhas: ");
    scanf("%d", &linhasnovas);
    printf("Insira a nova quantidade de colunas: ");
    scanf("%d", &colunasnovas);    
}while (linhas<0 || linhas>MAX || colunas<0 ||colunas>MAX);
int* novamatriz = aumentardiminuir(matriz, linhas, colunas, linhasnovas, colunasnovas);
int cont = 0;
printf("Nova matriz:\n");
for (int i = 0; i < linhasnovas; i++)
{
    for (int j = 0; j < colunasnovas; j++)
    {
        printf("%d\t",*(novamatriz+cont));
        cont++;
        
    }
    printf("\n");
}
}
if(escolha == 2)
{
printf("A sua matriz ja foi alterada? (Y / N ): ");
scanf(" %c", &YN);

if(YN == 'y' || YN == 'Y')
{
    printf("Indisponel");
}
else
{
    simetria(matriz, linhas, colunas);
}
}


if(escolha == 3)
{
    calculodotraco(matriz, linhas, colunas);
}
}while(1);
}


void lermatriz(int m[MAX][MAX], int linhas , int colunas)
{
int i, j;
for(i=0; i<linhas ; i++)
{
    for (j=0;j<colunas; j++)
    {
        printf("Insira o valor para o %d elemento da %d linha: ", j+1,i+1);
        scanf("%d", &m[i][j]);
    }
}
}

int* aumentardiminuir(int m[MAX][MAX], int l, int c, int linhas, int colunas)
{
int contaux;
//---------Reorganizar------------------
int aux[MAX*MAX];
for(int i = 0;i<MAX*MAX;i++)
{
    aux[i] = 69;
}
for (int i = 0; i < l; i++)
{
    for (int j = 0; j < c; j++)
    {
        aux[contaux] = m[i][j];
        contaux++;
    }
}
//-----novaalocacao--------------------------------
int* matriz;
matriz = (int*)malloc(sizeof(int)*linhas*colunas);
//---------repordados------------------
contaux = 0;
for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        *(matriz+contaux) = aux[contaux];
        contaux++;
    }   
}
//--------------------------------------
contaux = 0;
if(l*c<linhas*colunas) 
{
    char YN;
    printf("%d", *(matriz+1));
    printf("A nova matriz e maior do que a antiga, deseja acrescertar novos valores? Y / N\nobs.:se disser que nao os valors mantem-se: ");
    scanf(" %c", &YN);
    if(YN =='y' || YN=='Y')
    {
        for (int i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                if((*(matriz+contaux)==69))
                {
                    printf("Insira o valor para o %d elemento na %d linha",j+1,i+1);
                    scanf("%d", (matriz+contaux));
                    
                }
            contaux++;
            }
                
            
        }
    }
}
return matriz;
}

void simetria(int m[MAX][MAX], int linhas, int colunas)
{
    int i;
    for ( i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if(linhas==colunas)
            {
                if(!(m[i][j]==m[j][i]))
                {
                    printf("\nA matriz nao e simetrica\n");
                    i = linhas+2; j = colunas+2;
                }
                
            }
        }
    }
    if(i==linhas)
    printf("\nA matriz e simetrica\n");
}

void calculodotraco(int m[MAX][MAX], int linhas, int colunas)
{ 
    int soma = 0;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if(j==i)
            {
                soma += m[i][j];
            }
        }
    }
    printf("\nCalculo do traco: %d\n", soma);
}
