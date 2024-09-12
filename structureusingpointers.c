// main.c
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a Person
struct Person {
    char name[50];
    int age;
};

// Function prototypes
void printPerson(struct Person *p);

int main() {
    // Declare and initialize a structure variable
    struct Person person1;
    snprintf(person1.name, sizeof(person1.name), "Alice");
    person1.age = 30;

    // Declare a pointer to the structure
    struct Person *ptr = &person1;

    // Use the pointer to modify structure members
    snprintf(ptr->name, sizeof(ptr->name), "Bob");
    ptr->age = 25;

    // Print structure members through the pointer
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);

    // Allocate memory dynamically for another Person structure
    struct Person *dynamicPerson = (struct Person *)malloc(sizeof(struct Person));
    if (dynamicPerson == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Initialize the dynamically allocated structure
    snprintf(dynamicPerson->name, sizeof(dynamicPerson->name), "Abhishek");
    dynamicPerson->age = 19;

    // Print structure members of the dynamically allocated structure
    printf("Dynamically Allocated Person Name: %s\n", dynamicPerson->name);
    printf("Dynamically Allocated Person Age: %d\n", dynamicPerson->age);

    // Free allocated memory
    free(dynamicPerson);

    return 0;
}

// Function to print person details
void printPerson(struct Person *p) {
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
}
