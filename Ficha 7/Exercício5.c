#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/* void InicializarReserva(Reserva reservas[5][5]);
void MostrarVagas(Reserva reservas[5][5]);
void AdicionarReserva(Reserva reservas[5][5]);
void RemoverReserva(Reserva reservas[5][5]);
void listar(Reserva reservas[5][5]); */

    typedef struct{
    char* nome;
    int lugar;
    char* pagamento;
}Reserva;


int main()
{

Reserva reservas[5][5];


for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        reservas[i][j].lugar = 0;
        reservas[i][j].nome = "Null";   
        reservas[i][j].pagamento = "Null";   
    }
}
int Menu;
do{
printf("1 ----> Adicionar reserva\n");
printf("2 ----> Remover reserva\n");
printf("3 ----> Mostrar layout de lugares ocupados\n");
printf("4 ----> Listar reservas\n");
scanf("%d", &Menu);


// AdicionarReserva
if(Menu == 1)
{
int Qt_lugar = 0;
char YN;
printf("Quantos lugares quer adicionar?: ");
scanf(" %d", &Qt_lugar);
for (int qt = 0; qt < Qt_lugar; qt++)
    {
    for (int i = 0; i < 5; i++)
        {
        for (int j = 0; j < 5; j++)
            {
            if(reservas[i][j].lugar == 0) //So para identificar
                {
                    printf("Preencha os dados abaixo: \n");
                    printf("Nome: ");
                    scanf(" %s", &reservas[i][j].nome);
                    printf("Pagar agora? (Y / N): ");
                    scanf(" %c", &YN);
                    if(YN == 'Y' || YN == 'y')
                    {
                        reservas[i][j].pagamento = "Pago";
                    }
                    else
                    {
                        reservas[i][j].pagamento = "NaoPago";
                    }
                    reservas[i][j].lugar = 1;
                    printf("\nReserva adicionada com secusso!\n\n\n"); 
                    i = 5;
                    j = 5;
                }
            } 
        } 
    }
}

//Remover Reserva
if(Menu == 2)
{
    int i,j;
    printf("Que reserva remover? ([1][1] para a primeira reserva): ");
    scanf("%d %d", &i, &j);
    reservas[i-1][j-1].lugar = 0;
    reservas[i-1][j-1].nome = "Null";   
    reservas[i-1][j-1].pagamento = "Null";
    printf("Reserva removida com sucesso!\n\n");
}

//Mostrar Vagas
if(Menu == 3)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", reservas[i][j].lugar);
        }
        printf("\n");
    }
}

//listar Reservas   
if(Menu == 4)
{
    int a = 0;  
    int i,j; 
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            {
                if(reservas[i][j].lugar != 0)
                {
                    printf("LUGAR [%d][%d]:\n", i+1, j+1 );
                    printf("Lugar: %d\t", reservas[i][j].lugar);
                    printf("Nome: %s\t", reservas[i][j].nome);
                    printf("Estado do pagamento: %s\n", reservas[i][j].pagamento);
                    printf("\n");
                    a++;                                
                }
            }   
    }
    if(a==0)
    printf("Nao existem reservas\n\n");
} 
}while(1);
}
