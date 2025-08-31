#include <stdio.h>

int main() {

    int code_product1, code_product2,  unit_product1, unit_product2;
    float price_product1, price_product2, total;

    scanf("%i %i %f", &code_product1, &unit_product1, &price_product1);
    scanf("%i %i %f", &code_product2, &unit_product2, &price_product2);

    
    total = (unit_product1 * price_product1) + (unit_product2 * price_product2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}