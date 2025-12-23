#include <stdio.h>

int main() {
    float mass, velocity, kineticEnergy;

    printf("Enter mass: ");
    scanf("%f", &mass);

    printf("Enter velocity: ");
    scanf("%f", &velocity);

    kineticEnergy = 0.5 * mass * velocity * velocity;

    printf("Kinetic Energy = %.2f\n", kineticEnergy);

    return 0;
}