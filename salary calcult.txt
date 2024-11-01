#include <stdio.h>

int main() {
    char empID[11];
    int hours;
    float rate, salary;


    printf("Input the Employee's ID (Max. 10 chars): ");
    scanf("%10s", empID);
    printf("Input the working hrs: ");
    scanf("%d", &hours);
    printf("Salary amount/hr: ");
    scanf("%f", &rate);


    salary = hours * rate;
    
    printf("Employee's ID: %s\n", empID);
    printf("Salary of the month: %.2f\n", salary);

    return 0;
}
