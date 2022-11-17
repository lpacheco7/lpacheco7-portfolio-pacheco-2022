#include <stdio.h>
// codigo de FATTOR PACHECO POLICELLA

void pedirPelotas (void);
void ordenarPelotas (void);

struct pelotudos{
   int tenis;
   int futbol;
   int basquet;
}pelotas;

void pedirPelotas(){
    int pt, pf, pb;
    printf("¿Cuantas pelotas tenes?");
    printf("\nDe tenis: ");
    scanf("%d", &pt);
    pelotas.tenis += pt;
    printf("De futbol: ");
    scanf("%d", &pf);
    pelotas.futbol += pf;
    printf("De basquet: ");
    scanf("%d", &pb);
    pelotas.basquet += pb;
}
void ordenarPelotas(){
    printf("\n---------------------------------------------------");
    printf("\nPelotas ordenadas:");
    if (pelotas.tenis > pelotas.futbol && pelotas.tenis > pelotas.basquet){
        printf("\nTenis: %d", pelotas.tenis);
        if(pelotas.futbol > pelotas.basquet){
            printf("\nFutbol: %d", pelotas.futbol);
            printf("\nBasquet: %d", pelotas.basquet);
        } else if(pelotas.basquet > pelotas.futbol){
            printf("\nBasquet: %d", pelotas.basquet);
            printf("\nFutbol: %d", pelotas.futbol);
        }
    } else if(pelotas.futbol > pelotas.tenis && pelotas.futbol > pelotas.basquet){
        printf("\nFutbol: %d", pelotas.futbol);
        if(pelotas.basquet > pelotas.tenis){
            printf("\nBasquet: %d", pelotas.basquet);
            printf("\nTenis: %d", pelotas.tenis);
        } else if(pelotas.basquet > pelotas.tenis){
            printf("\nTenis: %d", pelotas.tenis);
            printf("\nBasquet: %d", pelotas.basquet);
        }
    } else if(pelotas.basquet > pelotas.futbol && pelotas.basquet > pelotas.tenis){
        printf("\nBasquet: %d", pelotas.basquet);
        if(pelotas.futbol > pelotas.tenis){
            printf("\nFutbol: %d", pelotas.futbol);
            printf("\nTenis: %d", pelotas.tenis);
        } else if(pelotas.tenis > pelotas.futbol){
            printf("\nTenis: %d", pelotas.tenis);
            printf("\nFutbol: %d", pelotas.futbol);
        }
    }
    printf("\n---------------------------------------------------");
}
int main()
{
    int i;
    do{
        pedirPelotas();
        ordenarPelotas();
        printf("\n¿Queres agregar mas pelotas? si=1/no=0\n");
        scanf("%d", &i);
    printf("\n---------------------------------------------------\n");
    }while(i==1);
    return 0;
}
