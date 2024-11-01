#include <stdio.h>

int main() {
    int distance;
    float fuel, avgConsumption;


    printf("Input total distance traveled (in km): ");
    scanf("%d", &distance);
    printf("Input total fuel spent (in liters): ");
    scanf("%f", &fuel);

    
    avgConsumption = distance / fuel;

    
    printf("Average consumption (km/l): %.2f\n", avgConsumption);

    return 0;
}
