#include<stdio.h>
int main(){
int distance_in_km;
printf("Enter distance in km: ");
scanf("%d", &distance_in_km);

printf("The distance in meters is %dm.\n" , 1000*distance_in_km);
printf("The distance in centimeters is %dcm." , 100000*distance_in_km);
return 0;
}