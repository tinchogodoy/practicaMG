#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Cliente.h"
#include "controller.h"
#include "parser.h"
#include "utn.h"


/****************************************************
    Menu: CAMBIAR
    1. Alta de cliente​​:
    2. Modificación​​ ​​de​​ ​​cliente:​​​
    3. Baja de cliente:
    4. Listar​​ ​​clientes:​​​
    5. Realizar una venta:
    6. Anular​​ ​​una​​ ​​venta:​​​ ​
    7. Informar​​ ​​ventas:​​​ ​
    8. Informar ventas por producto​​.
    9. Generar informe de ventas:
    10. Informar cantidad de ventas por cliente:

*****************************************************/


int main()
{

    ArrayList* pArrayClientes;
    pArrayClientes = al_newArrayList();
    controller_leerArchivoClientes("data1.csv",pArrayClientes);
    int menuOpcionElegida;
   /* char menuPrinsipalMensaje[] =
                "   \n1. Cargar datos desde data.csv\
                    \n2. Listar Clientes\
                    \n3. Ordenar por nombre y apellido\
                    \n4. Ordenar por mail\
                    \n5. Agregar un Cliente\
                    \n6. Elimina un Cliente\
                    \n7. Modificar Cliente (Nombre, Apellido y Mail)\
                    \n8. -\
                    \n9. Guardar datos en data.csv (modo texto)\
                    \n10. Guardar datos en data.bin (modo binario)\
                    \n11. Salir\n\
                    \nIngrese opcion: ";*/

    char menuPrinsipalMensaje[] =
                "   \n1. Alta Cliente\
                    \n2. Modificacion Clientes\
                    \n3. Baja de Clientes\
                    \n4. Listar Clientes\
                    \n5. Realizar una venta\
                    \n6. Anular una venta\
                    \n7. Informar ventas\
                    \n8. Informar ventas por productos\
                    \n9. Generar informe de ventas\
                    \n10. Informar cantidad de ventas por cliente\
                    \n11. Salir\n\
                    \nIngrese opcion: ";

    char menuPrinsipalMensajeError[] = "\nSe debe elegir una opcion del 1 al 10";

    do
    {
        menuOpcionElegida = 0;
        getValidInt(menuPrinsipalMensaje,menuPrinsipalMensajeError, &menuOpcionElegida , 0 , 11 , 2 );

        switch(menuOpcionElegida)
        {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:
            controller_ordenarClientesApellidoNombre(pArrayClientes);
            controller_listarClientes(pArrayClientes);
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:

            break;
        case 10:
            break;
        case 11:
            controller_guardarClientesArchivo("data2.csv",pArrayClientes);
            exit(1);
            break;
        default:
            printf("\nNO ES UNA OPCION VALIDA!!!\n\n");
            pause();
            break;
        }

    }while(menuOpcionElegida != 11);

    return 0;
int al_sort(ArrayList* this, int (*pFunc)(void* ,void*), int order)
{
    ArrayList* auxiliar = al_newArrayList();
    int returnAux = -1;
    int i;
    int flag;
    if(this != NULL && pFunc != NULL && (order == 1 || !order))
    {
       returnAux=0;
        do{
                flag = 0;
                if(order == 1 || order == 0)
                {
                    for(i=0;i<this->size/*al_len(this)*/-1;i++)
                    {
                        if((pFunc(this->pElements[i], this->pElements[i+1])>0 && order == 1) ||
                        (pFunc(this->pElements[i], this->pElements[i+1])<0 && order == 0))
                        {
                            auxiliar = this->pElements[i];
                            this->pElements[i] = this->pElements[i+1];
                            this->pElements[i+1] = auxiliar;
                            flag = 1;
                        }
                    }
                }
            }while(flag!=0);
    }

    return returnAux;
}
}
