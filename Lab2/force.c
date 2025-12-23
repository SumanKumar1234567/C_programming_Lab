#include <stdio.h>

int main() {
    float mass, acceleration, force;

    printf("Enter mass: ");
    scanf("%f", &mass);

    printf("Enter acceleration: ");
    scanf("%f", &acceleration);

    force = mass * acceleration;

    printf("Force = %.2f\n", force);

    return 0;
}
