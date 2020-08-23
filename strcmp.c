#include<stdio.h>


void main()
{
    char str1[50],str2[50];
    printf("enter the string one");
    gets(str1);
    printf("enter the string two");
    gets(str2);

    if(strcmp(str1,str2)==0)
    {
        printf("the two strings are same");
    }
    else
    {
        printf("the given two strings are not same");
    }

}
