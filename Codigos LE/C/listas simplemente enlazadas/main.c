#include <stdio.h>
#include <stdlib.h>

typedef struct snodo{
    int valor;
    struct snodo *sig;
}tnodo;

typedef tnodo *tpuntero;

void insertarEnLista (tpuntero *cabeza, int e);
void imprimirLista (tpuntero cabeza);
void borrarLista (tpuntero *cabeza);

int main()
{
    int e;
    int i = 1;
   
    tpuntero cabeza;
    cabeza = NULL;
   
    while(i == 1){
        printf("Ingrese un dato: ");
        scanf("%d", &e);
        insertarEnLista (&cabeza, e);
        printf("\n¿Quiere agragar otro dato? (si = 1) ");
        scanf("%d", &i);
    }    
   
    printf("\n¿Quiere imprimir la lista? (si = 1) ");
    scanf("%d", &i);
    if(i==1){
        printf("Tu lista: ");
        imprimirLista(cabeza);
    }
   
    printf("\n¿Quiere borrar la lista? (si = 1) ");
    scanf("%d", &i);
    if(i==1){
        borrarLista(&cabeza);
        printf("lista borrada");
    }
    return 0;
}

void insertarEnLista (tpuntero *cabeza, int e){
    tpuntero nuevo;
    nuevo = malloc(sizeof(tnodo));
    nuevo->valor = e;
    nuevo->sig = *cabeza;
    *cabeza = nuevo;
}
 
void imprimirLista(tpuntero cabeza){
    while(cabeza != NULL){
        printf("%d ",cabeza->valor);
        cabeza = cabeza->sig;
    }
}

void borrarLista(tpuntero *cabeza){
   
    tpuntero actual;
   
    while(*cabeza != NULL){
        actual = *cabeza;
        *cabeza = (*cabeza)->sig;
        free(actual);
    }
}