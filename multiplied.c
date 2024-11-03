#include <stdio.h>

int main() {
    int num1, num2;


    printf("Input the first number: ");
    scanf("%d", &num1);
    printf("Input the second number: ");
    scanf("%d", &num2);


    if (num1 % num2 == 0 || num2 % num1 == 0) {
        printf("Multiplied!\n");
    } else {
        printf("Not Multiplied!\n");
    }

    return 0;
}
