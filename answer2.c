#include <stdio.h>
void main()
{
    int num;
 
    printf("Input a number :");
    scanf("%d", &num);
    if (num % 5)
        printf("%d is not divisible by 5", num);
    else
        printf("%d is divisible by 5", num);
}