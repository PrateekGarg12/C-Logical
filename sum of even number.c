#include <stdio.h>

int main() {
    int p, q, r, s;

    printf("Input the first integer (p - even): ");
    scanf("%d", &p);
    printf("Input the second integer (q - positive): ");
    scanf("%d", &q);
    printf("Input the third integer (r - positive): ");
    scanf("%d", &r);
    printf("Input the fourth integer (s - positive): ");
    scanf("%d", &s);

    
    if (p % 2 == 0) {
        printf("First integer (p) must be even.\n");
        return 1;
    }
    if (q <= 0 || r <= 0 || s <= 0) {
        printf("Second, third, and fourth integers must be positive.\n");
        return 1;
    }


    if (q > r && s > p && (r + s) > (p + q)) {
        printf("Correct values\n");
    } else {
        printf("Wrong values\n");
    }

    return 0;
}
