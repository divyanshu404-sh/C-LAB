//Structure and Enum Combined – Car Type: Define an enum CarType with values like SEDAN, SUV,
//HATCHBACK. Define a structure Car with members name, model, and type (CarType). Display car details
//with readable text for the car type.

#include <stdio.h>

enum CarType { SEDAN = 1, SUV, HATCHBACK };

struct Car {
    char name[30];
    int model;
    enum CarType type;
};

int main() {
    struct Car c;

    printf("Enter car name: ");
    scanf("%s", c.name);

    printf("Enter model year: ");
    scanf("%d", &c.model);

    printf("Enter type (1.SEDAN  2.SUV  3.HATCHBACK): ");
    scanf("%d", (int*)&c.type);

    printf("\nCar Details:\n");
    printf("Name: %s\nModel: %d\nType: ", c.name, c.model);

    switch (c.type) {
        case SEDAN: printf("Sedan\n"); break;
        case SUV: printf("SUV\n"); break;
        case HATCHBACK: printf("Hatchback\n"); break;
        default: printf("Unknown\n");
    }

    return 0;
}