// 4: Escribir una función que calcule y presente las raíces reales de la ecuación de segundo grado ax2-bx+c=0

#include <stdio.h>
#include <math.h>

    void ecuation (double a, double b, double c, double * x1, double * x2)

int main (void)
{
    printf ("Solución de ax2+bx+c=0: 15x2 + 2x + (-8) = 0 ");
    double a = 15, b = 2, c = -8, x1, x2;

    ecuation (a, b, c, &x1, &x2);

    printf ("El resultado de x1 es: %f", x1);
    printf ("El resultado de x2 es: %f", x2);

    return 0
}
    void ecuation (double a, double b, double c, double * x1. double * x2)
    {
        *x1= (-b + (sqrt (b*b-4*a*c)))/2*a;
        *x2= (-b - (sqrt (b*b-4*a*c)))/2*a;

    }