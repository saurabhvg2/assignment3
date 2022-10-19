#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    num = num & 1;
    if (num == 0)
       printf("even number");
    else
       printf("odd number");
}