#include<stdio.h>
int main(){
    int base;
    int height;
    printf("Enter base of traingle: ");
    scanf("%d", &base);
    
    printf("Enter height of traingle: ");
    scanf("%d", &height);

    printf("The area of a traingle is %.2f",0.5*base*height);
    return 0;
 }