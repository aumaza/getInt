#include <stdio.h>
#include <stdlib.h>

int getInt(char msj[], char error[], int a, int b);

int main()
{
    int min=0;
    int max=99;
    char mensaje[20]="Ingrese su edad: ";
    char msjError[20]="Valor incorrecto";


    getInt(mensaje,msjError,min,max);


    return 0;
}

int getInt(char msj[], char error[], int a, int b)
{
    //int i;
    int num;
    int flag=0;
    int errorAcum=0;


    printf("\n%s", msj);
    scanf("%d", &num);

    while(num>a && num<=b)
    {
        flag=1;
        break;
    }


     if(flag==0)
    {
       do{
       printf("\n%s", error);

       printf("\n\nIngrese su edad: ");
       scanf("%d", &num);

       errorAcum++;

    }while(errorAcum==3);
    }
    printf("\nUsted ingreso: %d", num);

return num;
}
