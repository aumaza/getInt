#include <stdio.h>
#include <stdlib.h>

int getInt(char msj[], char error[], int limInf, int limSup, int intentos);

int main()
{

    getInt("Ingrese una edad entre 15 y 30: ","Edad fuera de rango, Ingrese nuevamente",15,30, 2);


    return 0;
}

int getInt(char msj[], char error[], int limInf, int limSup, int intentos)
{
    //int i;
    int dato;
    int flag=0;
    //int intentos;


    printf("\n%s", msj);
    scanf("%d", &dato);

    while((dato<limInf || dato>limSup) && (intentos>0))
    {
        printf("\n=======================================");
        printf("\n%s", error);
        printf("\n=======================================\n");
        intentos--;

        printf("\n%s", msj);
        scanf("%d", &dato);
        flag=1;

    }

    if(flag==1)
    {
        printf("\n=====================================");
        printf("\nHA EXCEDIDO LA CANTIDAD DE INTENTOS");
        printf("\n=====================================");
    }

     if(flag==0)
    {
        printf("\n=====================================");
        printf("\nUSTED INGRESO: %d", dato);
        printf("\n=====================================");

    }



return dato;
}
