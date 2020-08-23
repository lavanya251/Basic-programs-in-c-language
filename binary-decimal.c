#include<stdio.h>
void main()
{
    int binary_val,decimal_val=0,base=1,num,rem;
    printf("enter the decimal number ");
    scanf("%d",&num);
    binary_val=num;
    while(num>0)
    {
      rem=num%10;
      decimal_val=decimal_val+rem*base;
      num=num/10;
      base=base*2;

    }
    printf("the binary values is:%d ",binary_val);
    printf("the decimal val is:%d ",decimal_val);
}

