#include <stdio.h>
int main ()
{
    int num1, num2, temp;
    printf("enter number 1 ;");
    scanf("%d", &num1);

    printf("enter number 2 ;");
    scanf("%d", &num2);
    
    if(num1 == num2)
        printf("Both are Equal\n");
    else{
        temp = num1 > num2? num1 : num2;
        printf("%d is largest",temp);
    }

  return 0;
}