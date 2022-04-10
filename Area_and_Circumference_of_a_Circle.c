//WAP to calculate Area and Circumference of a Circle.
#include<stdio.h>
#define PI 3.14
int main(){
    
    float Radius,Circumference,Area;
    printf("Enter the radius of the circle ");
    scanf("%f",&Radius);
    Circumference = 2*PI*Radius;
    Area = PI*Radius*Radius;
    printf("Circumference of the circle = %f\n",Circumference);
    printf("Area of the circle = %f\n",Area);
    return 0;
}
