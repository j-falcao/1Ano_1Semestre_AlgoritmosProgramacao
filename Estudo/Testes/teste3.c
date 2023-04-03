#include <stdio.h>
#include <stdlib.h>




void main(){
    int* ptr = malloc(sizeof(int)*2);
    *ptr = 5;
    *(ptr+1) = 10;
    printf("%d\n", *ptr);
    printf("%d\n", *(ptr+1));
    printf("%d\n", ptr);
}