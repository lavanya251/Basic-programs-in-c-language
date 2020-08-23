#include<stdio.h>
void main()
{
int a=10,b=20;

printf("the values before swapping a = %d and b = %d", a , b);

a=a+b;
b=a-b;
a=a-b;

printf("the number after swapping is a = %d and b = %d",a,b);
}
