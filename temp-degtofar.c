#include<stdio.h>
void main()
{
    float celsius,farenheit;
    printf("enter the Temperature in celsius");
    scanf("%f",&celsius);

    farenheit=(celsius*9/5)+32;
    printf("%.2f celsius = %.2f farenheit",celsius,farenheit);

}
