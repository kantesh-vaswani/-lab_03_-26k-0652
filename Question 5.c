#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d",&num2);
    num1=num1+num2; // this number is sum of both numbers
    num2=num1-num2; // now second number is equal to first number
     
    num1=num1-num2; // sum - first number = second number    
    printf("First number you entered was %d\n", num1);
    printf("Second number you entered was %d", num2);
    return 0;
}