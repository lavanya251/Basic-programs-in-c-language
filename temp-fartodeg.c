#include<stdio.h>
void main()
{
    float celsius,farenheit;
    printf("enter the temperature in farenheit");
    scanf("%f",&farenheit);
    celsius= (5.0/9)*(farenheit-32);
    printf("%.2f farenheit =%.2f celsius",farenheit,celsius);
}
