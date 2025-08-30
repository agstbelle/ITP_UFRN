#include <stdio.h>

int main(){

    int employees_number, worked_hours_month;
    float received_per_hour, salary;

    scanf("%i", &employees_number);
    scanf("%i", &worked_hours_month);
    scanf("%f", &received_per_hour);

    salary=(worked_hours_month*received_per_hour);

    printf("NUMBER = %i\n", employees_number);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}