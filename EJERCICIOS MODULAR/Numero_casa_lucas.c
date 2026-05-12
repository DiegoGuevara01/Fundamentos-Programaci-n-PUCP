#include <math.h>
#include <stdio.h>
void leer(int*opcion, int*posicion );
int  Casa(int poscion );
int  Casa2(int posicion );
int  Lucas(int posicion );

int main() {
    int opcion, posicion, NumeroCasa1 , NumeroCasa2, NumeroLucas;
    leer(&opcion, &posicion);
    if ((opcion==1||opcion==2) && posicion>=0) {

        if (opcion==1) {
            NumeroCasa1= Casa(posicion);
            NumeroCasa2= Casa2(posicion);
            printf("El numero casa en la posicion %d calculado con la sumatoria es %d \n",posicion,NumeroCasa1);
            printf("El numero casa en la posicion %d calculado con la formula es %d \n",posicion,NumeroCasa2);
            if (NumeroCasa1==NumeroCasa2) {
                printf("Se comprueba que los resultados de ambas formulas son equivalente");
            }
        }
        if (opcion==2) {
            NumeroLucas= Lucas(posicion);
            printf("El numero Lucas en la posicion %d es %d :\n",posicion,NumeroLucas);
        }

    }
    if (opcion!=2&&opcion!=1) {
        printf("Opcion invalida\n");

    }
    if (posicion<0) {
        printf("Posicion invalida\n");
        
    }
    return 0;
}

void leer(int *opcion , int*posicion ) {

    printf("Seleccione 1 si desa encontrar u numero casa, 2 para encontrar un numero lucas :\n");
    scanf("%d",opcion);
    printf("Ingrese la posicion del numero que sea encontrar:\n");
    scanf("%d",posicion);

}
int Casa(int posicion ) {
    int NumeroCasa1, i, Suma;
    i=1;
    Suma=0;

    while (i<=posicion) {

        Suma+=pow(i,2);
        i++;
    }

    NumeroCasa1 = pow(posicion+1,3)+ Suma;
    return NumeroCasa1;

}
int Casa2(int posicion ) {
    int NumeroCasa2;
    NumeroCasa2 = (8*pow(posicion,3)+ 21*pow(posicion,2)+19*posicion+6)/6;
    return NumeroCasa2;
}
int Lucas(int posicion ) {
    int NumeroLucasN, i, Lucas0,Lucas1;
    Lucas0=2;
    Lucas1=1;
    i=2;
    if (posicion==0 ) {
        NumeroLucasN=Lucas0;
    }if (posicion==1) {
        NumeroLucasN=Lucas1;
    }
    while (i<=posicion) {
        NumeroLucasN=Lucas1+Lucas0;
        Lucas0=Lucas1;
        Lucas1=NumeroLucasN;
        i++;
    }
    return NumeroLucasN;

}
