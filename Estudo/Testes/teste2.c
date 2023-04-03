#include <stdio.h>
#include <stdlib.h>
#include <string.h>


 //&p (casa onde vive o portal) 
 //p (caminho/mapa do portal, recebe os endereco/localizaçao da casa)
 //*p (casa dentro do portal)


void main(){
    
    char* p = malloc(10);
    for (int i=2;i<100;i++)
    {
        p[i] = 'a';
        printf("%d\n",&*(p+i));
    }
    printf("%s" ,p);
    *p = 'x';
    *(p+1) = 'b';
    //*(p+2) = '\0';
    //p = "abcd";

   // scanf("%s", string);


    printf("%c\n", *p); 
   printf("%c\n", *(p+1));
    printf("%s\n", p);
    printf("%d\n", &*p);

char i[] = "o";
printf("%s",i);






    /*   char *string = malloc(sizeof(char));
    char array[] = {"dpkq"};
    *string = array[0];
    
    string = array
    *string = &array
    *string = array --> n funciona
    printf("%c", string[0]);*/ 
}