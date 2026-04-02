#include <stdio.h>
#include <math.h>
int main() {
    double x1, x2, x3;

    printf("INGRESE DATOS DE X1 ",x1);
    scanf("%lf",&x1);
    printf("INGRESE DATOS DE X2",x2);
    scanf("%lf",&x2);
    printf("INGRESE DATOS DE X3",x3);
    scanf("%lf",&x3);
// PARA EL POLINOMIO P(X)
    double coef0  = 1.345;
    double coef1  = -0.566;
    double coef2  = 5.7823;

// PARA EL POLINOMIO Q(X)
    double a = -3.5;
    double b = 7.65;
    double c = 2.356;

// OPERACIONES 1 2 Y 3
    double P1 =  (pow(coef2,(double) 3/14))*pow(x1,2)-(1/(pow(coef1, 2.0)))*x1 - pow(coef0,6.0);
    double Q1 = (-c*7.0/9.0)*pow(x1, 2.0)+(pow(b,1.0/6.0))*x1 + (1/pow(-a, 4.0));
    double P2 =  (pow(coef2,(double) 3/14))*pow(x2,2)-(1/(pow(coef1, 2.0)))*x2 - pow(coef0,6.0);
    double Q2 = (-c*7.0/9.0)*pow(x2, 2.0)+(pow(b,1.0/6.0))*x2 + (1/pow(-a, 4.0));
    double P3 =  (pow(coef2,(double) 3/14))*pow(x3,2)-(1/(pow(coef1, 2.0)))*x3 - pow(coef0,6.0);
    double Q3 = (-c*7.0/9.0)*pow(x3, 2.0)+(pow(b,1.0/6.0))*x3 + (1/pow(-a, 4.0));
// Resultados guardados
    double R1= (P1/Q1);
    double R2= (P2/Q2);
    double R3= (P3/Q3);
// COMPARACION :
    double provicional = (R1< R2) ? R1 : R2;
    double Final = (provicional < R3) ? provicional : R3;
printf("La division de polinomios para x1 es %lf\n"
       "la division de polinomios para x2 es %lf\n"
       "La division de polinomios para x3 es %lf\n"
       "El menor valor de todos los resultados es %lf ", R1, R2, R3,Final);




    return 0;
}