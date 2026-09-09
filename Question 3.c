#include<stdio.h>
int main(){
float distance_in_km;
printf("Enter distance in km: ");
scanf("%f", &distance_in_km);

printf("The distance in meters is %.1f m.\n" , 1000*distance_in_km);
printf("The distance in centimeters is %.1f cm." , 100000*distance_in_km);
return 0;
}
