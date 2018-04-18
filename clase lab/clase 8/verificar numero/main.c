#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int main()
{   int i;
    int flag = 0,nro;
    char dato[15];
    printf("ingrese numero");
    fflush(stdin);
    scanf("%s",dato);
    for(i=0;i<strlen(dato);i++){
        if(isdigit(dato[i])==1){
            flag=1;
            break;
        }
    }if(flag==0){
    nro=atoi(dato);
    }
    if(flag==0){
        printf("error no es numero");
    }else{
    if(flag==1)
    {
    printf("es un numero");

    }
    return 0;
}
}
