#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;


    printf("Input the first number: ");
    scanf("%d", &numbers[0]);
    printf("Input the second number: ");
    scanf("%d", &numbers[1]);
    printf("Input the third number: ");
    scanf("%d", &numbers[2]);
    printf("Input the fourth number: ");
    scanf("%d", &numbers[3]);
    printf("Input the fifth number: ");
    scanf("%d", &numbers[4]);


    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) { 
            sum += numbers[i];
        }
    }

    printf("Sum of all odd values: %d\n", sum);

    return 0;
}
