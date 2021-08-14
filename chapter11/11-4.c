#include <stdio.h>
#include <string.h>

int main(void) {
    struct petinfo {
        char species[10];
        char sex;
        int  age;
        char name[15];
    } pet[6];

    strcpy(pet[0].species, "Cat");
    pet[0].sex = 'F';
    pet[0].age = 2;
    strcpy(pet[0].name, "Diva");

    // printf("%s:\n\tSpecies: %s\n\tAge: %d\n\tSex: %c\n", pet[0].name, pet[0].species, pet[0].age, pet[0].sex);

    struct petinfo *petptr;

    petptr = pet;

    printf("%s:\n\tSpecies: %s\n\tAge: %d\n\tSex: %c\n", (*petptr).name, petptr -> species, (*petptr).age, petptr -> sex);
    return 0;
}