#include<stdio.h>
#include<math.h>


int main()
{
     typedef struct coordenada{
        int x,y;
    }COORDENADA;

    COORDENADA n;

    printf("Insira a coordenada x: ");
    scanf("%d", &n.x);
    printf("Insira a coordenada y: ");
    scanf("%d", &n.y);

    int area = n.x*n.y;
    printf("A area e: %d\n", area);

    float comprimentodiagonal = sqrt(n.x*n.x + n.y*n.y);
    printf("%f\n", comprimentodiagonal);



}

