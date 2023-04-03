#include<stdio.h>
#include<string.h>
#include<stdlib.h>

    typedef struct{
        char autor[30];
        char titulo[30];
        char area[20];
        int ano;
    }Livros;


int main()
{   
    int opcao, qtlivros_acrescentar, rm_livro, rm_mais = 0;
    char YN;
    int numero_do_livro_pesquisar;
    Livros livro[100];

    for(int i = 0; i < 100; i++)       //Limpar lista de livros
    {
        strcpy(livro[i].autor , "Vazio"); 
        strcpy(livro[i].titulo, "Vazio");
        strcpy(livro[i].area, "Vazio");
        livro[i].ano = 0;
    }
    
    do{
    printf("1 ----> Adicionar livros\t\t");
    printf("2 ----> Remover livro\t\t");
    printf("3 ----> Listar livros\t\t");
    scanf("%d", &opcao);


    if(opcao == 1)                     //Adicionar livro
    {
        int livrosguardados;
        for(livrosguardados=0;livrosguardados<100;livrosguardados++)
        {
            if(strcmp(livro[livrosguardados].autor, "vazio"))
                break;
        }
    printf("Existem %d livros guardados\n", livrosguardados);
    printf("Quantos livros quer adicionar?: ");
    scanf("%d" ,&qtlivros_acrescentar);
    for(int j=0;j<qtlivros_acrescentar;j++)
    {
        printf("Insira autor de livro numero %d: ", livrosguardados+j);
        scanf(" %s", livro[livrosguardados+j].autor);
        printf("Insira titulo de livro numero %d: ", livrosguardados+j);
        scanf(" %s", livro[livrosguardados+j].titulo);
        printf("Insira area de livro numero %d: ", livrosguardados+j);
        scanf(" %s", livro[livrosguardados+j].area);
        printf("Insira ano de livro numero %d: ", livrosguardados+j);
        scanf(" %d", &livro[livrosguardados+j].ano);
    }
    printf("Livro(s) adicionado(s) com sucesso!\n\n");
    }

    if(opcao == 2)                                  //Remover livro
    {
        do
        {
        printf("Que livro quer remover?: ");
        scanf("%d", &rm_livro);

        strcpy(livro[rm_livro].autor, "vazio" );
        strcpy(livro[rm_livro].titulo, "vazio");
        strcpy(livro[rm_livro].area, "Vazio");
        livro[rm_livro].ano = 0;
        printf("Livro removido com sucesso! \nQuer remover mais livros? (Y / N): ");
        scanf("%c", &YN);
        if(YN == 'Y' || YN == 'y');
        rm_mais++;
        }while(rm_mais == 0);
    printf("\n\n");
    }

    if(opcao == 3)                                  //Listar livro
    {   
        printf("\nNumero do livro a pesquisar: ");
        scanf("%d", &numero_do_livro_pesquisar);

        if(numero_do_livro_pesquisar > 0 && numero_do_livro_pesquisar <=100)
        { 
        printf("Livro: %d\n", numero_do_livro_pesquisar);
        printf("%s\t", livro[numero_do_livro_pesquisar-1].titulo);
        printf("%s\t", livro[numero_do_livro_pesquisar-1].autor);
        printf("%s\t", livro[numero_do_livro_pesquisar-1].area);
        printf("%d\t", livro[numero_do_livro_pesquisar-1].ano);
        }
        else
        {
            printf("Numero de livro invalido!\n\n");
        }
         
            printf("Quer listar todos os livros? ( Y / N ): ");
            scanf(" %c", &YN);
            if(YN == 'Y' || YN == 'y')
            {
            for(int i=0; i<100 ;i++)
            {
                printf("LIVRO NUMERO: %d\n", i+1);
                printf("Autor: %s\t", livro[i].autor);
                printf("Titulo: %s\t", livro[i].titulo);
                printf("Area: %s\t", livro[i].area);
                printf("Ano: %d\t", livro[i].ano);
                printf("\n\n");
            }
            }
    }
}while(1);
}
