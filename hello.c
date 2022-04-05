#include <stdio.h>
#include <string.h>
#include "config.h"

struct myStructure {
    int age;
    char name[50];
    double money;
};

int main() {
    struct myStructure s1;
    int age = 10;
    int *ptr = &age;
    const char name[] = "Rishaw";

    s1.age = 15;
    s1.money = 50000000000000000;
    strcpy(s1.name, "Rishaw");


    printf("My name is %s and I am %d years old. I have $%lf \n", s1.name, s1.age, s1.money);
    printf("%d \n", *(&age));
    printf("%p \n", ptr);
    server("Rishaw");

    return 0;
}