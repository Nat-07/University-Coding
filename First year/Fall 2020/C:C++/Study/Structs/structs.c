#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct Student{
    int age;
    char name[10];
    float height;
};


int main(){

    struct Student person1;

    struct Student* ptr;

    ptr = &person1;

    ptr -> age = 29;

    strcpy(person1.name, "ted");

    ptr -> height = 5.324;

    printf("Age: %d\n", person1.age);
    printf("Name: %s\n", person1.name);
    printf("Age: %lf\n", person1.height);

    return 0;
}