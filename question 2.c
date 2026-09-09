#include <stdio.h>

int main() {
    int age;
    char name[20] , department[20] , studentID[20] , university_name[20];


    printf("Enter your name: ");
    scanf("%19s", &name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your department: ");
    scanf("%19s", &department);

    printf("Enter your student ID: ");
    scanf("%19s", &studentID);

    printf("Enter your university name: ");
    scanf("%19s", &university_name);

    printf("       Student Details       \n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Department: %s\n", department);
    printf("Student ID: %s\n", studentID);
    printf("University name: %s\n", university_name);
    return 0;
}