#include <stdio.h>

int main(){
    int X;
    float Y, spent_fuel_total;

    scanf("%d", &X);
    scanf("%f", &Y);

    spent_fuel_total= X/Y;

    printf("%.3f km/l\n", spent_fuel_total);


    return 0;
}