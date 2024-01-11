#include<stdio.h>
#include<math.h>

int main()
{
    int num, sum = 0, temp, a;

    printf("Enter a number:  ");
    scanf("%d", &num);

    temp = num;  // as need to retain the original number
    while(num != 0)
    {
        a = num%10;
        sum += a*a*a;
        num = num/10;
    }

    printf("\n\n\n\t\t\tsum = %d", sum);

    if(sum == temp)
        printf("\n\n\t\t%d is an armstrong number\n", temp);
    else
        printf("\n\n\t\t%d is not an armstrong number\n", temp);

    return 0;
}