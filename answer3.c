#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if (num % 2)
       printf("odd number");
    else
       printf("even number");
}