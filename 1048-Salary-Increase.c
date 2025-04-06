#include <stdio.h>

int main() {
    float salary, increase, new_salary;
    int percentage;

    scanf("%f", &salary);

    // Determine percentage and calculate new salary
    if (salary <= 400.00) {
        percentage = 15;
    } else if (salary <= 800.00) {
        percentage = 12;
    } else if (salary <= 1200.00) {
        percentage = 10;
    } else if (salary <= 2000.00) {
        percentage = 7;
    } else {
        percentage = 4;
    }

    increase = salary * percentage / 100.0;
    new_salary = salary + increase;


    printf("Novo salario: %.2f\n", new_salary);
    printf("Reajuste ganho: %.2f\n", increase);
    printf("Em percentual: %d %%\n", percentage);

    return 0;
}
