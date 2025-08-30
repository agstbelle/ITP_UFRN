#include <stdio.h>

int main() {
    double A, B, C, temporario;
    scanf("%lf %lf %lf", &A, &B, &C);

 
    if (A < B) { 
        temporario = A; A = B; B = temporario; 
    }
    if (A < C) { 
        temporario = A; A = C; C = temporario; 
    }
    if (B < C) { 
        temporario = B; B = C; C = temporario; 
    }

    
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } 
    else {

        if (A*A == B*B + C*C)
            printf("TRIANGULO RETANGULO\n");
        if (A*A > B*B + C*C)
            printf("TRIANGULO OBTUSANGULO\n");
        if (A*A < B*B + C*C)
            printf("TRIANGULO ACUTANGULO\n");

        if (A == B && B == C)
            printf("TRIANGULO EQUILATERO\n");
        else if (A == B || B == C || A == C)
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
