#include <stdio.h>

int main ()
{

    FILE* f;
    f= fopen("dados.txt", "w");
    fputc
}
/*FILE *f
f = fopen("dados.txt", "r")
if (f!=NULL)// correu bem , devemos sempre fazer isto.


fclose(f)

para escrever o caminho temos de usar duas barras \\

MODES DE ABERTURA

"r /r+ / rb " read  - se o ficheiro nao existir da erro. o ficheiro comeca no inicio
"w / w+ / wb " write - o poteiro comeca no inicio
"a / a+ /ab " appende (acrescentar) - o ponteiro comeca no fim

MODO LER
3 funcoes para cada char ,string ,scanf
MODO ESCREVER
3 funcoes para cada char ,string ,scanf


enter assum como fim da string 

KImpar o buffer
int fflush (FILE* ficheiro);

MANIPULACAO DE FICHEIROS BINARIOS
acedem diretamente as variaveis a memoria
modo leitura  - so exste fread
moodo escrita - so exste fwrite


podemos criar dois ponteiros um para o ler e outro para escrever

FILE *f1 *f2;
aluno turma[50];
f1=fopen("fixe.dat", "rb");
f2=fopen("fixe.dat", "wb");

fread(turma, sixeof(aluno), 50, f1);
//alterar, manipular vetor turma

fwrite (turma, sizeof(Aluno), 50, f2)

fclose(f1); fclose (f2); 
*/