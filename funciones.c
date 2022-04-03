#include "header.h"

booleano esFechaValida(Fecha fecha)
{
    if(fecha.anio >= ANIO_BASE)
    {
        if(fecha.dia>=1 && fecha.dia<=cantDiaMes(fecha.mes, fecha.anio))
        {
            return VERDADERO;
        }
    }
    return FALSO;
}

int cantDiaMes(int mes, int anio)
{
    const static int cdm[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(mes==2 && esBisiesto(anio))
    {
        return 29;
    }
    return cdm[mes-1];
}

booleano continuar(char* mensaje)
{
    char respuesta;
    puts(mensaje);
    fflush(stdin);
    scanf("%c", &respuesta);
    respuesta = tolower(respuesta);
    while(respuesta != 's' && respuesta != 'n')
    {
        puts("Respyesta invalida");
        puts("Debe ingresar (s/n): ");
        fflush(stdin);
        scanf("%c", &respuesta);
    }
    return respuesta == 's';
}

void sumaNDias(int dia, int mes, int anio)
{
    int dias, i;
    printf("Ingrese la cantidad de dias a sumar: ");
    scanf("%d", &dias);
    for(i=1; i<=dias; i++)
    {
        dia+= 1;
        if(dia>cantDiaMes(mes, anio))
        {
            dia = 1;
            mes +=1;
            if(mes>12)
            {
                mes = 1;
                anio += 1;
            }
        }
    }
    printf("El dia resultante es: %d/%d/%d/\n", dia, mes, anio);
}
