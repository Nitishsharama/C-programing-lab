#include <stdio.h>
int main()
{
    int number;
    printf("Enter an integer:");
    scanf("%d",&number);
    //true if the number is perfectly divisible by 2
    if(number%2==0)
     printf("%d is an even.",number);
    else
      printf("%d is an odd value",number);
    return 0;
    }