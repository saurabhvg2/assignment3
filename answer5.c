#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if (num >99 & num<10000)
       printf("three digit number");
    else
       printf("not a three digit number");
}