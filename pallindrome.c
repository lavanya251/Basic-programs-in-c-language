#include<stdio.h>

void main()
{
    int n,temp,sum=0,r;
    printf("enter an integer");
    scanf("%d",&n);
    temp=n

    while(n>0)
    {

        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)

        printf("the given number is palindrome");
    else
        printf("not a palindrome number");
}
