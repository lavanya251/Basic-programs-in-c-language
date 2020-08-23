#include<stdio.h>
void main()
{
    int num,rem,copy_of_num,sum=0;
    printf("enter a number");
    scanf("%d",&num);

    copy_of_num = num;

    while(num !=0)
    {
        rem = num%10;
        sum = sum+(rem*rem*rem);
        num = num/10;
    }

    if(copy_of_num==sum)

        printf("%d is Armstrong number",copy_of_num);

    else

        printf("%d is not Armstrong number",copy_of_num);

}
