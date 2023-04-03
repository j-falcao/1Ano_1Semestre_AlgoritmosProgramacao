#include<stdio.h>

int main()
{
    int* p; //declaracao

    int i = 10;

    p = &i; 
    //--------
    *p = i;
    //--------
    &p;

    printf("%d\n",p);
    printf("%d\n", &i);
    printf("%d\n",&p);
    printf("%d\n", *p);
    i=5;
    printf("%d\n", *p);






int palavra[10] = {2,1};



printf("%d\n", palavra+1);
printf("%d\n", &palavra[0]);

//palavra e a mesma coisa que &palavra[0]
//palavra+1 e a mesma coisa que &palavra[1]

//^^^^^(endereço)--------------^^^^^^^^(tb e um endereco)


/* char* f; //= malloc(1); //&f[0](nao e igual)

char j ='q';
// 
*f =j;
printf("%c\n", *f);



//
f = &j;

printf("%c\n", *f); */


//++++++++++++++++++++++++++++++++++++++++++++++++
int* f; //= malloc(1); //&f[0](nao e igual)
int j = 2;
 /*printf("xixi\n");
    *f = j;    //ESTA ERRADO porque estamos a por um numero no conteudo de f
            // sendo que ele nao recebe o endereço de nada entao nao consegue
            //aceder a nada (nao pudemos saltar o passo de lhe dar um endereço)
            //o valor de f(*f) nao existe por que ele nao esta enderecado a nada
printf("coco\n");    
printf("%d\n", *f);
printf("%d jjj\n", &j);
printf("ola");
/*
//
f = &j;
printf("%d\n", *f);
 */













int u = 0;
//*f = j;
f = j;

printf("%d a\n", f); 










}

