#include <stdio.h>
#include <math.h>

int main(){
    double A,B,C, triangulo, circulo, trapezio, quadrado, retangulo, expoente2=2;

    scanf("%lf %lf %lf",  &A, &B, &C);

    triangulo = (A*C)/2;
    circulo = 3.14159 * pow(C, expoente2);
    trapezio = ((A+B)*C)/2;
    quadrado = pow(B, expoente2);
    retangulo = A*B;

    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);
    

}