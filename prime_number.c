#include<stdio.h>
void main()
{
    int n,p=0;
    printf("enter an integer");
    scanf("%d"&n);
    for(i=0;i<=n;i++)
    {
        if(n%i==0)
        {
            p++;
        }
    }
    if(p==2)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}
