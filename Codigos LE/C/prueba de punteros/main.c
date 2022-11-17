#include <stdio.h>
#include <stdlib.h>
//codigo FATTOR PACHECO

char nombre[20];

int main()
{
    char * p_nombre = malloc(sizeof(nombre));
    
    printf("Nombre: ");
    scanf("%20s", p_nombre);
    
    for(int i = 0; i < sizeof(nombre) && *p_nombre != '\0'; i++){
        printf("Byte %d: %c\n", i, *p_nombre);
        p_nombre++;
    }
    
    printf("Direccion variable: %p", p_nombre); 
    
    return 0;
}
