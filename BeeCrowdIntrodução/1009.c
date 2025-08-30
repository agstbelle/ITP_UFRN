#include <stdio.h>

int main(){
 
    char sellers_name[50];
    double salary, sales_month, salary_with_bonus;

    scanf("%s", &sellers_name);
    scanf("%lf", &salary);
    scanf("%lf", &sales_month);

    salary_with_bonus = salary + (sales_month * 0.15);

    printf("TOTAL = R$ %.2lf\n", salary_with_bonus);

    return 0;
}