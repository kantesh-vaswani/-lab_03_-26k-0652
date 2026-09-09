#include <stdio.h>

int main() {
    int age;
    char name[50];

    printf("Enter name: ");
    scanf("%49s", name);

    printf("enter age: ");
    scanf("%d", &age);

    printf("enter your father name: ");

    printf("My name is %s\n", name);
    printf("My age is %d\n", age);

    return 0;
}