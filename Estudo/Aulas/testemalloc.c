#include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int ola;
    char* olachar;
}bomdia;
int main()
{

bomdia* ola;
ola = (bomdia*) malloc(sizeof(bomdia));

scanf("%d", &ola->ola);
printf("%d\n", ola->ola);
bomdia ola2;
scanf("%d", &ola2.ola);

}
