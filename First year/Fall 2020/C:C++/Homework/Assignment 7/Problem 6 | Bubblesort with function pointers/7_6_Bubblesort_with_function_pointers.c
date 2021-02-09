#include <stdio.h>
#include <stdlib.h>

/*
    CH-230-A
    a7 p6.[c]
    Justin Morris
    j.morris@jacobs-university.de
*/

struct people{
    char person_name[30];
    int age;
};

void arrayPrinter(struct people *arr[], int arrLength){
    int i;
    // cycle through and print
    for(i = 0; i < arrLength; i++){
        printf("{%s, %d}; ", (arr[i] -> person_name), (arr[i] -> age));
    }

    printf("\n");
}

int main(){
    int i, j;
    int numPeople;
    
    // user choosen # of people
    scanf("%d", &numPeople);
    
    struct people *arr[numPeople];

    // choose name and age for new person
    for(i = 0; i < numPeople; i++){
        int newAge;

        // create new person
        struct people* new_Person;

        // allocating memory to the new person
        new_Person = (struct people*)malloc(sizeof(struct people));
        if (new_Person == NULL) {
            exit(0);
        }
        
        // giving name to person node
        scanf("%s", new_Person->person_name);

        // get the age and give person the age
        scanf("%d", &newAge);
        getchar();

        new_Person -> age = newAge;
        
        // assigning array index equal to person
        arr[i] = new_Person;
    }

    // print the array
    arrayPrinter(arr, numPeople);

    // free-ing memory
    for(j = 0; j < numPeople; j++){
        free(arr[j]);
    }

    return 0;
}
