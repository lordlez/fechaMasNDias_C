#include "header.h"

int main()
{
    Fecha fecha;
    do
    {
        printf("Ingrese una fecha (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &fecha.dia, &fecha.mes, &fecha.anio);
        if(esFechaValida(fecha))
        {
            sumaNDias(fecha.dia, fecha.mes, fecha.anio);
        }else
        {
            printf("La fecha ingresada no es valida\n");
        }
    }while(continuar("Desea ingresar otra fecha? (s/n): "));
    return 0;
}

